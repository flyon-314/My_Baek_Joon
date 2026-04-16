#include <algorithm>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;
bool visited[1001][1001];
int dx[4] = {0 ,-1 ,0 ,1};
int dy[4] = {-1 , 0 ,1 ,0};

int main(   )
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ,m;
    int num[1001][1001];
    cin>>n>>m;

    queue<pair<int,int> > q;
    int x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp;
            cin>>temp;
            if(temp==2)
            {
                y=i;
                x=j;
                num[i][j]=0;
            }
            else
            {
                num[i][j]=temp;
            }
        }
    }

    q.push(make_pair(y,x));
    visited[y][x]=1;

    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int ny = p.first + dy[dir];
            int nx = p.second + dx[dir];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (num[ny][nx] == 0) continue;
            if(visited[ny][nx]==1)continue;

            num[ny][nx] +=num[p.first][p.second];
            q.push(make_pair(ny,nx));
            visited[ny][nx]=1;
            
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]!=1 && num[i][j] != 0) cout<<-1<<" ";
            else cout<<num[i][j]<<" ";
        }
        cout << "\n";
    }
}
