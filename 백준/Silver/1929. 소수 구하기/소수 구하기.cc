#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int nArr[1000001];
    for(int i=2;i<=n;i++){
        nArr[i]=i;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(nArr[i]==0)
            continue;
        for(int j=i*i;j<=n;j+=i){
            nArr[j]=0;
        }
    }
    for(int i=m;i<=n;i++){
        if(nArr[i]!=0)
            cout<<nArr[i]<<"\n";
    }
}