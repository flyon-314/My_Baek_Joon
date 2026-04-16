#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

int main(   )
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ,m;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        auto it = lower_bound(a.begin(), a.end(), temp);
        if (it != a.end() && *it == temp)
            cout << "1\n";
        else
            cout << "0\n";
    }

    
    return 0;
}
