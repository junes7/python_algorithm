#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

using namespace std;

int solution(string word) {
    int r=0,s=0;
    vector<int> v;
    map<char,int> vow={{'A',0},{'E',1},{'I',2},{'O',3},{'U',4}};
    for(int i=0;i<5;i++) {
        s+=pow(5,i);
        v.push_back(s);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<word.size();i++) {
        r+=(vow[word[i]])*v[i]+1;
    }
    return r;
}