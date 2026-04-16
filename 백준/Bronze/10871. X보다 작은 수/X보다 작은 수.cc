#include <iostream>

using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        if(temp<x)
            cout<<temp<<" ";
    }
    
}