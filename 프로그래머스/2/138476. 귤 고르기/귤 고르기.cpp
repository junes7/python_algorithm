#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int r=0,cnt=0;
    map<int,int> ocnt;
    for(int i=0;i<tangerine.size();i++) {
        if(ocnt.find(tangerine[i])==ocnt.end())
            ocnt[tangerine[i]]=1;
        else
            ocnt[tangerine[i]]+=1;
    }
    vector<pair<int,int>> vocnt(ocnt.begin(),ocnt.end());
    sort(vocnt.begin(),vocnt.end(),[](const pair<int,int>& a, const pair<int,int>& b) {
       if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    });
    for(auto vitr:vocnt) {
        if(cnt>=k) {
            break;
        } else {
            cnt+=vitr.second;
            r+=1;
        }
    }
    return r;
}