#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main(   )
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> problem;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        problem.push_back(temp);
    }

    sort(problem.begin(), problem.end());

    
    int cut = round((double)n * 0.15);
    int sol = 0;
    for (int i = 0 + cut ; i < n - cut; i++)
    {
        sol += problem[i];    
    }

    sol = round(sol / ((double)n - (double)cut * 2));
    
    cout << sol ;
}
