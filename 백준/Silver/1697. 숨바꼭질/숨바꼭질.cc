#include <bits/stdc++.h>

using namespace std;
int dist[100002];
int n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue <int> q;
    cin>> n >> m;
    
    fill(dist,dist+100001,-1);
    dist[n]=0;
    
    q.push(n);
    
    while(dist[m]==-1){
        int temp=q.front();
        q.pop();
        for(int i: {temp+1,temp-1,temp*2}){
            if(i<0||i>100001)continue;
            if(dist[i]>=0) continue;
            dist[i]=dist[temp]+1;
            q.push(i);
            
        }
    }
    cout<<dist[m];
    return 0;
}