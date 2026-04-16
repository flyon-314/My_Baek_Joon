#include <iostream>
using namespace std;

int main() {
    int n;
    int sequence[301];
    int dp[301];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>sequence[i];
    }
    dp[1]=sequence[1];dp[2]=dp[1]+sequence[2];
    for(int i=3;i<=n;i++){
        dp[i]=max(dp[i-2]+sequence[i],dp[i-3]+sequence[i]+sequence[i-1]);
    }
    cout<<dp[n];
    
}