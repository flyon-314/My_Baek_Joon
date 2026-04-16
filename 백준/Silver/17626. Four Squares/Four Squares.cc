#include <algorithm>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

int main(   )
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector <int> v(N+1);

    for (int i = 1; i*i <= N; i++)
    {
        v[i * i] = 1;
    }
    for (int i = 1; i <= N; i++)
    {
        if (v[i] != 1)
        {
            v[i] = v[i-1] + 1;
            for (int j = 2; i - j * j > 0; j++)
            {
                v[i] = min(v[i], v[i - j * j] + 1);
            }
        }
    }

    cout << v[N];
}
