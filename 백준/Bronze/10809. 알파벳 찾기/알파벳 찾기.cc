#include <iostream>
#include <string>
using namespace std;

int main() {
    string inp;
    int button=0;
    cin>>inp;
    for(int i='a';i<='z';i++){
        button=0;
        for(int j=0;j<inp.length();j++){
            if(inp[j]==i){
                cout<<j<<" ";
                button=1;
                break;
            }
        }
        if(!button)
            cout<<-1<<" ";
        
    }
    
    
    
}