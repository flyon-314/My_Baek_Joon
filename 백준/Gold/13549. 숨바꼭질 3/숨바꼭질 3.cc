#include <bits/stdc++.h>

using namespace std;
int arr[100001];
int visited[100001];
int dx[2]={-1,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    queue <int> q;
    cin>>n>>k;
    visited[n]=1;
    q.push(n);
    
    int count=0;
    while(!q.empty()){
        
        int s=q.size();
        for(int i=0;i<s;i++){
            int temp=q.front();q.pop();
            int re=temp;
            while(temp!=0 &&temp*2<k*2){
                temp *=2;
                if(visited[temp]==0){
                    visited[temp]=1;
                    q.push(temp);
                }
                
            }
            q.push(re);
        }
        s=q.size();
        for(int i=0;i<s;i++){
            int x=q.front();q.pop();
            if(x==k){
                cout<<count;
                return 0;
            }
            for(int dir=0;dir<2;dir++){
                int nx=x+dx[dir];
                if(nx<0||nx>200001)continue;
                if(visited[nx]==1)continue;
                visited[nx]=1;
                q.push(nx);
            }
        }
        count++;
    }
}