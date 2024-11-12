#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> arr) {
    int r=1;
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) {
            if(arr[i][j]!=arr[j][i]) {
                r=0;
                break;
            }
        }
    }
    return r;
}