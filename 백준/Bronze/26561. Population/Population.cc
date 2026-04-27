#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        long long p, t;
        cin >> p >> t;

        long long result = p + (t / 4) - (t / 7);
        cout << result << "\n";
    }

    return 0;
}