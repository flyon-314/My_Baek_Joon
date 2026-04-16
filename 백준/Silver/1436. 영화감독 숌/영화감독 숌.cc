#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;

int main(   )
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    int count = 0;
    int num = 666;
    string str = " ";
    
    cin >> n;

    
    while (true)
    {
        str = to_string(num);
        if ( string::npos != str.find("666"))
        {
            count++;
        }
        
        if (n == count)
        {
            cout << str << "\n";
            return 0;
        }
        
        num++;
    }

    
    return 0;
}
