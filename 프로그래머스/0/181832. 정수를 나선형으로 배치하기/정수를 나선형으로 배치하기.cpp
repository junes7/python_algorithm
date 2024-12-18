#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> r;
    vector<int> dx,dy;
    int d=0,e=1,x=0,y=0;
    for(int i=0;i<n;i++) {
        dx.push_back(0);
    }
    for(int i=0;i<n;i++) {   
        r.push_back(dx);
    }
    dx={1,0,-1,0};
    dy={0,1,0,-1};
    while(e<=n*n) {
        r[y][x]=e++;
        if(x+dx[d]<0 or y+dy[d]<0 or x+dx[d]>=n or y+dy[d]>=n or r[y+dy[d]][x+dx[d]]!=0)
            d=(d+1)%4;
        y=y+dy[d];
        x=x+dx[d];
    }
    return r;
}