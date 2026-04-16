#include <iosfwd>
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int big[3];
    int small[3];

    int x, y, z;
    cin >> x >> y >> z;

    big[0] = x; small[0] = x;
    big[1] = y; small[1] = y;
    big[2] = z; small[2] = z;

    for (int i = 1; i < n; i++)
    {
        cin >> x >> y >> z;
        int temp1 = x, temp2 = y, temp3 = z;
        temp1 += max(big[0], big[1]);
        temp2 += max(big[1], max(big[2], big[0]));
        temp3 += max(big[2], big[1]);
        big[0] = temp1; big[1] = temp2; big[2] = temp3;

        temp1 = x; temp2 = y; temp3 = z;
        temp1 += min(small[0], small[1]);
        temp2 += min(small[1], min(small[2], small[0]));
        temp3 += min(small[2], small[1]);
        small[0] = temp1; small[1] = temp2; small[2] = temp3;
    }

    cout << max(big[0], max(big[1], big[2])) << " ";
    cout << min(small[0], min(small[1], small[2])) << "\n";
    
    return 0;
}
    