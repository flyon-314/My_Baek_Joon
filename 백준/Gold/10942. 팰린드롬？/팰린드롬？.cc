#include <bits/stdc++.h>

using namespace std;

int num[2001];
int dp[2001][2001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>num[i];
    for(int i=1;i<=n;i++) dp[i][i]=1;
    for(int i=1;i<n;i++) if(num[i]==num[i+1])dp[i][i+1]=1;
    for(int i=3;i<=n;i++){
        for(int j=1;j<=n-i+1;j++) if(num[j]==num[j+i-1]&&dp[j+1][j+i-2])dp[j][j+i-1]=1;
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int s,e;
        cin>>s>>e;
        cout<<dp[s][e]<<"\n";
    }
    return 0;
}