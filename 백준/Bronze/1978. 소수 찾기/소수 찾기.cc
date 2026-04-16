#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, sol = 0;
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
	    int count=0;
		cin >> temp;
		for (int div = 1; div <= temp; div++) {
			if (temp%div == 0)
				count++;
		}
		if (count == 2)	
			sol++;
	}
	cout << sol << '\n';
}