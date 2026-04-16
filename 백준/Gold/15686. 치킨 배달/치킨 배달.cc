#include <algorithm>
#include <iosfwd>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void find_comb(int s, int e, int cur, vector<int> &v, vector<vector<int>> &all )
{
    if (cur == 0)
    {
        all.push_back(v);
        return;
    }

    for (int i = s ; i < e; i++)
    {
        v.push_back(i);
        
        find_comb(i + 1, e, cur - 1 , v, all);

        v.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector <pair <int, int> > h;
    vector <pair <int, int> > c;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int num;
            cin >> num;

            if (num == 1) h.push_back(make_pair(i, j));
            if (num == 2) c.push_back(make_pair(i, j));
        }
    }
    vector<vector<int>> all;
    vector<int> cur;
    for (int i  = 1 ; i <= m ; i++)
    {
        find_comb(0, c.size(), i, cur, all);
    }
        
    int sol = 99999999;
    
    for (int i = 0 ; i < all.size(); i++)
    {
        int sum = 0;
        for (int j = 0 ;j < h.size() ; j++)
        {
            int distance = 99999999;
            for (int k = 0 ; k < all[i].size(); k++)
            {
                int x = h[j].first - c[all[i][k]].first;
                int y = h[j].second - c[all[i][k]].second;
                if (x < 0) x *= -1;
                if (y < 0) y *= -1;
                distance = min(distance, x + y);
            }
            sum += distance;
        }
        sol = min(sol, sum);
    }
    
    cout << sol;
}
    