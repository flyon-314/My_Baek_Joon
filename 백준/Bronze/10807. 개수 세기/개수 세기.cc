#include <iostream>

using namespace std;

int main() {
    int num[100]={};
    int N,x,temp,count=0;
    cin>>N;
    for(int i=0;i<N;i++) {
        cin>>temp;
        num[i]=temp;
    }
    cin>>x;
    for(int i=0;i<N;i++){
        if(num[i]==x) count++;
    }
    cout<<count;
    
}