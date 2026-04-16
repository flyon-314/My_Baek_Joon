#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int re;
    string inp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>re>>inp;
        for(int j=0;j<inp.length();j++){
            for(int k=0;k<re;k++)
                cout<<inp[j];
        }
        cout<<endl;
    }
    
}