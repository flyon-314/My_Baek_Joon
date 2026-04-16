#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    string inp;
    
    cin>>N;
    while(N--){
        list <char> key;
        list <char> ::iterator t = key.begin();
        cin>>inp;
        for(int i=0 ; i<inp.length() ; i++){
            if(inp[i]=='<'){
                if(t != key.begin())  t--;
            }
            else if(inp[i]=='>'){
                if(t != key.end()) t++;
            }
            else if(inp[i]=='-'){
                if(t!=key.begin()) t=key.erase(--t);
            }
            else {
                t=key.insert(t,inp[i]);
                t++;
            }
        }
        for(auto i : key) cout<<i;
        cout<<"\n";
    }
}