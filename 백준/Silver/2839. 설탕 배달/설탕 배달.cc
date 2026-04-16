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

    int n;

    cin >> n;

    int sugar[5000] = {0};

    sugar[3] = 1;
    sugar[5] = 1;
    for (int i = 6 ; i <= n ; i++)
    {
        if (sugar[i-3] == 0 && sugar[i-5] == 0)
            continue;
        else if (sugar[i-3] == 0 || sugar[i-5] == 0)
        {
            sugar[i] = max(sugar[i-3], sugar[i-5])+1;
        }
        else 
            sugar[i] = min(sugar[i-3], sugar[i-5])+1;
    }

    if ( sugar[n] == 0 )
        cout << -1 ;
    else
        cout << sugar[n];
    
    return 0;
}
