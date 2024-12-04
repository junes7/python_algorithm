#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int r=0,l=dots.size();
    sort(dots.begin(),dots.end());
    // for(int i=0;i<dots.size();i++) {
    //     for(int j=0;j<dots[i].size();j++)
    //         cout<<dots[i][j]<<' ';
    //     cout<<endl;
    // }
    // for(auto id:dots) {
    //     cout<<id[0]<<' '<<id[1]<<endl;
    // }
    r=(dots[l-1][0]-dots[0][0])*(dots[l-1][1]-dots[0][1]);
    return r;
}