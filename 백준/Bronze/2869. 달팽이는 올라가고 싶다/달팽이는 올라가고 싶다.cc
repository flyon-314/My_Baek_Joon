#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int apart[15][15];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int a, b, v;
    cin >> a >> b >> v;
    int m =  a - b;
    int sol = v % m == 0 ? v / m : (v + m) / m;
    int num = (sol * m) + b - v;

    cout << sol - (num / m);
    
    return 0;
}