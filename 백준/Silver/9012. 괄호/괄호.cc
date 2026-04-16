#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
    
    string inp;
    
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string sol="YES";
        vector<char> v;
        cin>>inp;
        for(int i=0;i<inp.length();i++){
            if(inp[i]=='(')
                v.push_back(inp[i]);
            else if(inp[i]==')' && !v.empty()){
                v.pop_back();
            }
            else
                sol="NO";
                
        }
        if (!v.empty())
            sol="NO";
        
        cout<<sol<<"\n";
            
    }
    
}