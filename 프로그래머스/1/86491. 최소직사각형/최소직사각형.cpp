#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int r=0,maxw=0,maxh=0;
    for(int i=0;i<sizes.size();i++) {
        if(sizes[i][0]<sizes[i][1]) {
            r=sizes[i][0];
            sizes[i][0]=sizes[i][1];
            sizes[i][1]=r;
        }
        if(maxw<sizes[i][0])
            maxw=sizes[i][0];
        if(maxh<sizes[i][1])
            maxh=sizes[i][1];
    }
    r=maxw*maxh;
    return r;
}