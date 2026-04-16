#include <algorithm>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(   )
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M ;
    cin >> N >> M;
    unordered_map<string, int> name_map;
    
    unordered_map<int, string> number_map;
    
    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;

        name_map[s] = i;
        number_map[i] = s;
    }

    for (int i = 1; i <= M; i++)
    {
        string s;
        cin >> s;
        if (s[0]>='0' && s[0]<='9')
        {
            cout << number_map[stoi(s)] << "\n";   
        }
        else
        {
            cout << name_map[s] << "\n";
        }
    }
}
