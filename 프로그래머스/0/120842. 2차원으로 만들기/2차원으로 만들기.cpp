#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> r(num_list.size()/n,vector<int>(n,0));
    for(int i=0;i<r.size();i++)
        for(int j=0;j<r[i].size();j++)
            r[i][j]=num_list[n*i+j];
    return r;
}