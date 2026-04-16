#include <algorithm>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int dx[4] = {0 , -1 , 0 ,1};
int dy[] = {-1 , 0 , 1 , 0};
int visited[601][601];
int main(   )
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<string> grid(N);
    queue <pair<int,int>> q;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        grid[i] = str;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
           if (grid[i][j] == 'I')
               q.push(make_pair(i,j));
        }
    }    
    int count = 0;
    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = p.first + dy[i];
            int nx = p.second + dx[i];
            
            if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if (grid[ny][nx] == 'X') continue;
            if (visited[ny][nx]) continue;
            if (grid[ny][nx] == 'P') count ++;
            visited[ny][nx] = 1;
            q.push(make_pair(ny,nx));
            
        }
    }
    if (count == 0) cout << "TT\n";
    else cout << count << "\n";
}
