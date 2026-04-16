#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string inp;
    int score=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int sum=0;
        cin>>inp;
        for(int i=0;i<inp.length();i++){
            if(inp[i]=='O'){
                score++;
                sum+=score;
            }
            else
                score=0;
        }
        cout<<sum<<endl;
        score=0;   
    }
    
    
}