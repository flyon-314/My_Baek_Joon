#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);    

    int n;
    cin >> n;

    int num=1;
    
    string str = "";
    vector <int> arr;
    vector <char> oper;
    arr.push_back(0);

    while(n--){
        int temp;
        cin >> temp;

        while (num <= temp) {
            arr.push_back(num++);
            oper.push_back('+');
        }

        if ( arr.back() != temp){
            cout << "NO" << endl;
            return 0;
        }

        arr.pop_back();
        oper.push_back('-');
    }

    for(char c : oper) cout << c << "\n";
}