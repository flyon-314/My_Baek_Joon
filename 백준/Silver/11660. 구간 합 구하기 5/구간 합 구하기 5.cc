#include <iostream>
using namespace std;

int num[1025][1025];
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int n, m;
     cin >> n >> m;

     for (int i = 1; i <= n; i++)
     {
          int inp;
          cin >> inp;
          num[1][i] = inp + num[1][i - 1];
     }
     for (int i = 2; i <= n; i++)
     {
          for (int j = 1 ; j <= n; j++)
          {
               int inp;
               cin >> inp;
               if (j == 1) num[i][j] = inp + num[i - 1][j];
               else num[i][j] = inp + num[i][j - 1] + num[i - 1][j] - num[i - 1][j - 1];
          }
     }
     
     while (m--)
     {
          int y1, x1, y2, x2;
          cin >> y1 >> x1 >> y2 >> x2;
          
          cout << num[y2][x2] + num[y1 - 1][x1 - 1] - num[y1 - 1][x2] - num[y2][x1 -1]<< '\n';
     }
}
