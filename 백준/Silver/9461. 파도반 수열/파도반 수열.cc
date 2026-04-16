#include <iostream>
using namespace std;
const int MAX=99999;
int main() {
    long long int n,t;
    long long int dp[101]={0,};
    dp[1]=1;dp[2]=1;dp[3]=1; dp[4]=2;dp[5]=2;
    cin>>t;
    for(int tr=0;tr<t;tr++){
        cin>>n;
        for(int i=6;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-5];
        }
        cout<<dp[n]<<endl;
        
    }
    
}