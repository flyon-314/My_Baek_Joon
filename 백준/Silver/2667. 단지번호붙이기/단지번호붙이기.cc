#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int graph[26][26];
int visited[26][26]={0,};
vector <int> v;
int dx[4]={0, -1, 1, 0};
int dy[4]={1, 0, 0, -1};
int N,cou=0;
string str;

void reasearch(int cur_y,int cur_x){
    visited[cur_y][cur_x]=1;
    for(int i=0;i<4;i++){
        int next_x=cur_x+dx[i];
        int next_y=cur_y+dy[i];
        if(visited[next_y][next_x]==0 && next_x<=N && next_y<=N && graph[next_y][next_x]==1){
            reasearch(next_y,next_x);
            cou++;
        }
            
    }
}

int main() {
    int m_count=0;
    cin>>N;
    visited[0][0]=1;
    for(int i=1;i<=N;i++){
        visited[i][0]=1;
        visited[0][i]=1;
    }
        
    for(int i=1;i<=N;i++){
        cin>>str;
        for(int j=1;j<=N;j++){
            graph[i][j]=str[j-1]-48;
        }
    }
    
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(visited[i][j]==0 &&graph[i][j]==1){
                reasearch(i,j);
                v.push_back(cou);
                m_count++;
            }
            cou=0;
        }
                
    }
    cout<<m_count<<"\n";
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]+1<<"\n";
        
    }
}