#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int graph[101][101];
int dx[4]={0, -1, 1, 0};
int dy[4]={1, 0, 0, -1};
int M,N;

struct miro {
    int y, x;
};
queue<miro> q;
void BFS(int y,int x){
    q.push({y,x});
    while(!q.empty()){
        miro cur=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int next_y=cur.y+dy[i];
            int next_x=cur.x+dx[i];
            if( graph[next_y][next_x]==1 && next_x>=0 &&next_y>=0 && next_x<N&&next_y<M){
                q.push({next_y,next_x});
                graph[next_y][next_x]+=graph[cur.y][cur.x];
            }
        }
    }
    
}

int main() {
    string str;
    cin>>M>>N;
    for(int i=0;i<M;i++){
        cin>>str;
        for(int j=0;j<N;j++){
            graph[i][j]=str[j]-48;
        }
    }
    
    BFS(0,0);
    cout<<graph[M-1][N-1];
    
}