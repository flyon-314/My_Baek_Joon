#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> num;
    while(n--){
        string str;
        cin >> str;
        
        if(str == "push"){
            int x;
            cin >> x;

            num.push_back(x);
        }

        else if(str == "pop"){
            if(num.empty())
                cout << -1 <<endl;
            else {
                cout << num.back() << endl;
                num.pop_back();
            }
                
        }
        
        else if(str == "size"){
            cout << num.size() << endl;
        }

        else if(str == "empty"){
            cout << num.empty() << endl;
        }

        else if(str == "top"){
            if (num.empty())
                cout << -1 <<endl;
            else 
                cout << num.back() << endl;
        }

    }
}