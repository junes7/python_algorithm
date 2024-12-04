#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> r={0,0}; vector<int> side={0,0,0,0};
    for(int i=0;i<board.size();i++) {
        side[2*i]=-(board[i]-1)/2;
        side[2*i+1]=(board[i]-1)/2;
    }
    for(int i=0;i<keyinput.size();i++) {
        if(keyinput[i]=="left") {
            if(r[0]>side[0])
                r[0]-=1;
        } else if(keyinput[i]=="right") {
            if(r[0]<side[1])
                r[0]+=1;
        } else if(keyinput[i]=="down") {
            if(r[1]>side[2])
                r[1]-=1;                
        } else {
            if(r[1]<side[3])
                r[1]+=1;
        }
    }
    return r;
}