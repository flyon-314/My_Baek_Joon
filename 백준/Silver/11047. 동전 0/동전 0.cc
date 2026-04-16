#include <bits/stdc++.h>

using namespace std;
int coin[1000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,value;
    int sol=0;
    cin>>n>>value;
    for(int i=0;i<n;i++)cin>>coin[i];
    for(int i=n-1;i>=0;i--){
        sol+=value/coin[i];
        value%=coin[i];
    }
    cout<<sol;
}