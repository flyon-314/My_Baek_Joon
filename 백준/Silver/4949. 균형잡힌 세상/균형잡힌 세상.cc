#include <bits/stdc++.h>
using namespace std;

int n,l;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(true){
        string str;
        bool check=true;
        stack <char> s;

        getline(cin,str);
        if(str[0]=='.')
            break;
        
        for(auto i : str){
            if(i=='(' || i=='[') s.push(i);
            else if(i==')'){
                if( !s.empty()&&s.top()=='(') s.pop();
                
                else {
                    check=false;
                    break;
                }
            }
            else if(i==']'){
                if(!s.empty()&&s.top()=='[') s.pop();
                
                else {
                    check=false;
                    break;
                }
            }
        }
        if(check&&s.empty()) cout<<"yes\n";
        else cout<<"no\n";
    }
    
}