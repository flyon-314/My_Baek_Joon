#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inp;
	int count = 1;

	getline(cin, inp);

	for (int i = 0; i < inp.length(); i++){
		if (inp[i] == ' ')
			count++;
	}

	if (inp[0] == ' ')
		count--;

	if (inp[inp.length()-1] == ' ')
		count--;

	cout << count;
}