#include <bits/stdc++.h>

using namespace std;

int graph[101][101];
int visited[101];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue <int> q;
    int com,link,count=0;
    cin>>com>>link;
    while(link--){
        int x1,x2;
        cin>>x1>>x2;
        graph[x1][x2]=1;
        graph[x2][x1]=1;
    }
    q.push(1);
    visited[0]=1;
    visited[1]=1;
    while(!q.empty()){
        count++;
        int temp=q.front(); q.pop();
        for(int dir=1;dir<=com;dir++){
            if(graph[temp][dir]!=1 ||visited[dir]==1)continue;
            visited[dir]=1;
            q.push(dir);
        }
    }
    cout<<count-1;
    
}