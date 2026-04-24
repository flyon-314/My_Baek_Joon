#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin >> n;

    double result = n - 0.3;

    cout << fixed << setprecision(4) << result << endl;

    return 0;
}