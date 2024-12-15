#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int r=0;
    vector<int> b;
    for(int i=0;i<moves.size();i++) {
        for(int j=0;j<board.size();j++) {
            if(board[j][moves[i]-1]>0) {
                if(b.size()==0 or b.back()!=board[j][moves[i]-1])
                    b.push_back(board[j][moves[i]-1]);
                else if(b.back()==board[j][moves[i]-1]) {
                    r+=2;
                    b.pop_back();
                }
                board[j][moves[i]-1]=0;
                break;
            }
        }
    }
    return r;
}