#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string r="";
    map<int,vector<int>> kpadpt={{1,{0,0}},{2,{0,1}},{3,{0,2}},{4,{1,0}},{5,{1,1}},{6,{1,2}},{7,{2,0}},{8,{2,1}},{9,{2,2}},{0,{3,1}}};
    vector<int> lpad={1,4,7};
    vector<int> rpad={3,6,9};
    int lx=3,ly=0,rx=3,ry=2,nx,ny,dl,dr;
    for(int i=0;i<numbers.size();i++) {
        if(find(lpad.begin(),lpad.end(),numbers[i])!=lpad.end()) {
            lx=kpadpt[numbers[i]][0];
            ly=kpadpt[numbers[i]][1];
            r+="L";
        } else if(find(rpad.begin(),rpad.end(),numbers[i])!=rpad.end()) {
            rx=kpadpt[numbers[i]][0];
            ry=kpadpt[numbers[i]][1];
            r+="R";
        } else {
            nx=kpadpt[numbers[i]][0];
            ny=kpadpt[numbers[i]][1];
            // 상하좌우로만 이동 가능하면 맨하탄 거리(Manhattan Distance) 이용
            dl=abs(lx-nx)+abs(ly-ny);
            dr=abs(rx-nx)+abs(ry-ny);
            if(dl==dr) {
                if(hand=="left") {
                    lx=nx;
                    ly=ny;
                } else {
                    rx=nx;
                    ry=ny;
                }
                r+=hand=="left"?'L':'R';
            } else if(dl<dr) {
                lx=nx;
                ly=ny;
                r+="L";
            } else {
                rx=nx;
                ry=ny;
                r+="R";
            }   
        }       
    }
    return r;
}