#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string before, string after) {
    int r=1;
    sort(before.begin(),before.end());
    sort(after.begin(),after.end());
    for(int i=0;i<before.size();i++) {
        if(before[i]!=after[i]) {
            r=0;
            break;
        }
    }
    return r;
}