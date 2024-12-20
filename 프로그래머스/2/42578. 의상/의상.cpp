#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int r=1;
    map<string,vector<string>> cl;
    for(int i=0;i<clothes.size();i++) {
        cl[clothes[i][1]].push_back(clothes[i][0]);
    }
    map<string,vector<string>>::iterator itr;
    for(itr=cl.begin();itr!=cl.end();itr++) {
        r*=cl[itr->first].size()+1;
    }
    return r-1;
}