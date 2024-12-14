#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int r=0,h_check,w_check,n=board.size();
    vector<int> dh={0,1,-1,0};
    vector<int> dw={1,0,0,-1};
    for(int i=0;i<4;i++) {
        h_check=h+dh[i];
        w_check=w+dw[i];
        if((0<=h_check && h_check<n) && (0<=w_check && w_check<n)) {
            if(board[h][w]==board[h_check][w_check]) {
                r+=1;
            }
        }
    }
    return r;
}