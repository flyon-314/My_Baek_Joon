#include <bits/stdc++.h>

using namespace std;

int wall[1001][1001];
int visited[1001][1001];
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    queue <pair<int,pair<int,int>>> q;
    for(int i=0;i<n;i++){
        string inp;
        cin>>inp;
        for(int j=0;j<inp.length();j++) {
            wall[i][j]=inp[j]-'0';
        }
    }
    visited[0][0]=1;
    q.push({0,{0,0}});
    int count=1;
    while(!q.empty()){
        if(q.front().first==n-1 &&q.front().second.first==m-1) {
            cout<<count;
            return 0;
        }
        int s=q.size();
        for(int i=0;i<s;i++){
            pair <int,pair<int,int>> temp=q.front(); q.pop();
            for(int dir=0;dir<4;dir++){
                int nx=temp.second.first+dx[dir];
                int ny=temp.first+dy[dir];
                if(nx==m-1&&ny==n-1){
                    cout<<++count;
                    return 0;
                }
                if(nx<0||nx>=m||ny<0||ny>=n) continue;
                if(wall[ny][nx]==1 &&temp.second.second==1)continue;
                if(visited[ny][nx]==1)continue;
                if(visited[ny][nx]==2&&temp.second.second==1)continue;//방문한 적이 있더라도 벽을 통과한 경로가 지나간 곳이라면 벽을 통과하지 않은 경로는 통과 
                if(temp.second.second==0){ //벽 통과 유무에 따라 visted 값을 따로 처리
                    if(wall[ny][nx]==0){
                        visited[ny][nx]=1;
                        q.push({ny,{nx,temp.second.second}});
                    }
                    else{
                        if(temp.second.second==0){
                            visited[ny][nx]=1;
                            q.push({ny,{nx,1}});
                        }
                    }
                }
                else { //벽을 한번 통과한 경로는 visited를 2로 표기
                    if(wall[ny][nx]==0){
                        visited[ny][nx]=2;
                        q.push({ny,{nx,temp.second.second}});
                    }
                    else{
                        if(temp.second.second==0){
                            visited[ny][nx]=2;
                            q.push({ny,{nx,1}});
                        }
                    }
                }
                
            }
        }
        count++;
    }
    cout<<"-1";
}