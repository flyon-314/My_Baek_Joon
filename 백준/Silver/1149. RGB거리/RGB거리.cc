#include <bits/stdc++.h>

using namespace std;

int rgb[3][1001];
int dp[3][1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int sol=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>rgb[0][i]>>rgb[1][i]>>rgb[2][i];
    dp[0][0]=rgb[0][0];
    dp[1][0]=rgb[1][0];
    dp[2][0]=rgb[2][0];
    for(int i=1;i<n;i++){
        dp[0][i]=rgb[0][i]+min(dp[1][i-1],dp[2][i-1]);
        dp[1][i]=rgb[1][i]+min(dp[0][i-1],dp[2][i-1]);
        dp[2][i]=rgb[2][i]+min(dp[1][i-1],dp[0][i-1]);
    }
    cout<<min(dp[0][n-1],min(dp[1][n-1],dp[2][n-1]));
}