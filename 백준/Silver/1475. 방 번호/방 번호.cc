#include <iostream>

using namespace std;

int main() {
    int N;
    int num[10]={};
    cin>>N;
    while(N!=0){
        if(N%10==6)num[9]++;
        else num[N%10]++;
        N/=10;
    }
    num[9]++;
    num[9]/=2;
        
    int set=0;
    for(int i=0 ; i<10;i++) set=max(set,num[i]);
    
    cout<<set;
}