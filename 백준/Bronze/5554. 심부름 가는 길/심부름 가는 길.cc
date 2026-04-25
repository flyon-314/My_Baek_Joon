#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total_seconds = a + b + c + d;

    cout << total_seconds / 60 << endl;
    cout << total_seconds % 60 << endl;

    return 0;
}