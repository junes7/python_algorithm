#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    map<int,int> cnt;
    int r=0,mnum;
    for(int i=0;i<array.size();i++) {
        cnt[array[i]]++;
    }
    vector<pair<int,int>> v(cnt.begin(),cnt.end());
    sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b) -> bool {
        return a.second>b.second;
    });
    mnum=v[0].second;
    for(pair<int,int> i:v) {
        if(i.second==mnum)
            r+=1;
    }
    r=(r>1)?-1:v[0].first;
    return r;
}