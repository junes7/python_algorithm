#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> strArr) {
    int r=0;
    map<int,int> len;
    for(int i=0;i<strArr.size();i++) {
        if(len[strArr[i].length()]==0) {
            len[strArr[i].length()]=1;
        } else {
            len[strArr[i].length()]+=1;
        }
    }
    
    for(pair<int,int> i : len) {
        if(r<i.second) {
            r=i.second;
        }
    }
    return r;
}