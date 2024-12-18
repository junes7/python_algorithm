#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int r=0,sx,ex,sy,ey,l=board.size();
    for(int i=0;i<l;i++) {
        for(int j=0;j<l;j++) {
            if(board[i][j]==1) {
                sx=(i==0)?0:i-1;
                ex=(i==l-1)?i:i+1;
                sy=(j==0)?0:j-1;
                ey=(j==l-1)?j:j+1;
                for(int k=sx;k<ex+1;k++) {
                    for(int m=sy;m<ey+1;m++) {
                        if(board[k][m]!=1)
                            board[k][m]=2;
                    }
                }
            }
        }
    }
    
    for(int i=0;i<l;i++) {
        for(int j=0;j<l;j++) {
            if(board[i][j]==0)
                r+=1;
        }
    }
    return r;
}