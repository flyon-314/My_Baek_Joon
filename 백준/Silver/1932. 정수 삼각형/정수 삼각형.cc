#include <bits/stdc++.h>

using namespace std;

int dist[501][501];
int dp[501][501];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,sol=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>dist[i][j];
        }
    }
    dp[0][0]=dist[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0) dp[i][j]+=dp[i-1][0]+dist[i][j];
            else if(j==i) dp[i][j]+=dp[i-1][j-1]+dist[i][j];
            else dp[i][j]+=dist[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
        }
    }
    for(int i=0;i<n;i++) sol=max(sol,dp[n-1][i]);
    
    cout<<sol;
    
    
}