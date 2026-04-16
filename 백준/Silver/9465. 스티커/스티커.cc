#include <iostream>
using namespace std;

int main() {
    int t;
    
    cin>>t;
    for(int tr=0;tr<t;tr++){
        int stiker[2][100001];
        int dp[2][100001]={0,};
        int n;
        cin>>n;
        
        for(int j=0;j<2;j++){
            for(int i=1;i<=n;i++){
                cin>>stiker[j][i];
            }
        }
        dp[0][0] = stiker[0][0];
        dp[1][0] = stiker[1][0];
        dp[0][1] = stiker[0][1] + dp[1][0];
        dp[1][1] = stiker[1][1] + dp[0][0];
        
        for(int i=2;i<=n;i++){
            
                dp[0][i]=stiker[0][i]+max(dp[1][i-1],dp[1][i-2]);
                dp[1][i]=stiker[1][i]+max(dp[0][i-1],dp[0][i-2]);
            
        }
        cout<<max(dp[0][n],dp[1][n])<<endl;
    
    
    }
    
    
}