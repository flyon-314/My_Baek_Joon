#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int graph[1001][1001];
int visited[1001];
int N,M,S;
queue <int> q;

void DFS(int s){
    
    cout<<s<<" ";
    visited[s]=1;
    
    for(int i = 1 ; i <= N ; i++){
        if(graph[s][i] &&visited[i]==0){
            DFS(i);
        }
    }
}

void BFS(int s){
    
    cout<<s<<" ";
    q.push(s);
    visited[s]=1;
    
    while(!q.empty()){
        
        int s=q.front();
        q.pop();
        
        for(int i=1;i<=N;i++){
            if(visited[i]==0 && graph[s][i]){
                cout<<i<<" ";
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

void clear(){
    for(int i=0;i<1001;i++){
        visited[i]=0;
    }
}
int main() {
    int a,b;
    cin>>N>>M>>S;
    
    for(int i = 0 ; i < M ; i++){
        cin>>a>>b;
        graph[a][b]=1;
        graph[b][a]=1;
    }
    DFS(S);
    
    clear();
    
    cout<<"\n";
    BFS(S);
    
    
}