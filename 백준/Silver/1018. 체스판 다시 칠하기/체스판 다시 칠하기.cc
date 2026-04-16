#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    string board[50];
    for (int i = 0; i < N; i++){
        cin >> board[i];
    }
    
    int ans = 64;
    for (int i = 0; i <= N - 8; i++){
        for (int j = 0; j <= M - 8; j++){
            int cntWhiteStart = 0;
            int cntBlackStart = 0;
            for (int x = 0; x < 8; x++){
                for (int y = 0; y < 8; y++){
                    char expectedForWhite = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expectedForBlack = ((x + y) % 2 == 0) ? 'B' : 'W';
                    if (board[i+x][j+y] != expectedForWhite)
                        cntWhiteStart++;
                    if (board[i+x][j+y] != expectedForBlack)
                        cntBlackStart++;
                }
            }
            ans = min(ans, min(cntWhiteStart, cntBlackStart));
        }
    }
    
    cout << ans << endl;
    return 0;
}
