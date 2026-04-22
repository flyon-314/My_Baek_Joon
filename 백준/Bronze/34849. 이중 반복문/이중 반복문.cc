#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n * n <= 100000000) {
        cout << "Accepted";
    } 
    else {
        cout << "Time limit exceeded";
    }

    return 0;
}