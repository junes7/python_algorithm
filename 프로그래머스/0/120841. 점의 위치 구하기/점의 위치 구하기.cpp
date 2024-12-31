#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    // int r=0;
    // if(dot[0]>0)
    //     r=(dot[1]>0)?1:4;
    // else
    //     r=(dot[1]>0)?2:3;
    int r=dot[0]>0?(dot[1]>0?1:4):(dot[1]>0?2:3);
    return r;
}