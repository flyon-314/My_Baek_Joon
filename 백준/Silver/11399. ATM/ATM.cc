#include <bits/stdc++.h>

using namespace std;

int atm[1001];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>atm[i];
    
    sort(atm,atm+n);
    int sol=0,temp=0;
    for(int i=0;i<n;i++){
        temp+=atm[i];
        sol+=temp;
    }
    cout<<sol;
}