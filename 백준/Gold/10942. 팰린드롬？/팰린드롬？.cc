#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;
int num[2001];
int recall[2001][2001];
int palindrom(int s, int e)
{
    if (s >= e) return 1;
    
    if (recall[s][e] != 0) return recall[s][e];

    if (num[s] == num[e]) return recall[s][e] = palindrom(s + 1, e - 1);
    else return recall[s][e] = -1;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        recall[i][i] = 1;
    }

    int t;
    cin >> t;
    while (t--) {
        int s, e;
        cin >> s >> e;

        int sol = palindrom(s, e);
        if (sol == -1) cout << 0 << "\n";
        else cout << sol << "\n";
    }
}