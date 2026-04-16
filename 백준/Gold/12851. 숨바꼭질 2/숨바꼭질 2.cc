#include <bits/stdc++.h>

using namespace std;

int visited[100001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    visited[n]=1;
    queue <int> q;
    q.push(n);
    int sol=0,count=0;
    while(!q.empty()){
        if(count!=0) break;
        int s=q.size();
        while(s--){
            int temp=q.front(); q.pop();
            if(temp==k) {
                count++;
                continue;
            }
            if(temp-1>=0){
                if(visited[temp-1]==0){
                    visited[temp-1]=visited[temp]+1;;
                    q.push(temp-1);
                }
                else if(visited[temp-1]==visited[temp]+1){
                    q.push(temp-1);
                }
                
            }
            
            if(temp+1<=k+1){
                if(visited[temp+1]==0){
                    visited[temp+1]=visited[temp]+1;
                    q.push(temp+1);
                }
                else if(visited[temp+1]==visited[temp]+1){
                    q.push(temp+1);
                }
                
            }
            
            if(temp*2<=k+1){
                if(visited[temp*2]==0){
                    visited[temp*2]=visited[temp]+1;; 
                    q.push(temp*2);
                }
                else if(visited[temp*2]==visited[temp]+1){
                    q.push(temp*2);
                }
                
            }
        }
        sol++;
    }
    cout<<sol-1<<"\n"<<count;
    
}