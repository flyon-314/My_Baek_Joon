#include <iosfwd>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;
int dp[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    s1 = " " + s1;
    s2 = " " + s2;

    for (int i = 1; i < s1.length(); i++)
    {
        for (int j = 1; j < s2.length(); j++)
        {
            if (s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    string anw = "";
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    while (true)
    {
        if (dp[i][j] == dp[i - 1][j]) i--;
        else if (dp[i][j] == dp[i][j - 1]) j--;
        else if (dp[i][j] == dp[i - 1][j - 1] + 1)
        {
            anw = s1[i] + anw;
            i--;
            j--;
        }
        if (i == 0)break;
    }
    cout << dp[s1.length() - 1][s2.length() - 1] << "\n";
    cout << anw << "\n";
}