#include <bits/stdc++.h>

using namespace std;
int dist[51][51];
int visited[51][51];
int t,n,m,k;
int x,y;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    cin>>t;
    while(t--){
        int count=0;
        queue <pair<int,int>> q;
        cin>>m>>n>>k;
        
        for(int i=0;i<k;i++){
            cin>>x>>y;
            dist[y][x]=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dist[i][j]==1 &&visited[i][j]==0){
                    count++;
                    visited[i][j]=1;
                    
                    q.push(make_pair(i,j));
                    while(!q.empty()){
                        pair <int,int> temp=q.front();
                        q.pop();
                        for(int dir=0;dir<4;dir++){
                            int ny=temp.first+dy[dir];
                            int nx=temp.second+dx[dir];
                            
                            if(ny<0 ||ny>=n||nx<0||nx>=m) continue;
                            if(dist[ny][nx]!=1 || visited[ny][nx]==1)continue;
                            visited[ny][nx]=1;
                            q.push(make_pair(ny,nx));
                            
                        }
                    }
                }
            }
        }
        cout<<count<<"\n";
        for(int i=0;i<51;i++){
            fill(dist[i], dist[i]+50,0);
            fill(visited[i],visited[i]+50,0);
        }
    }
    
    return 0;
}