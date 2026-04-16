#include <bits/stdc++.h>

using namespace std;

int dp[100001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,t,num;
    cin>>n>>t;
    for(int i=1;i<=n;i++){
        cin>>num;
        dp[i]=dp[i-1]+num;
    }
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        cout<<dp[y]-dp[x-1]<<"\n";
    }
}