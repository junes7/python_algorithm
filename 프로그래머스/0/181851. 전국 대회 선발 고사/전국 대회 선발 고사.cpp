#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int,int>> attRank;
    for(int i=0;i<rank.size();i++) {
        if(attendance[i])
            attRank.push_back({rank[i],i});
    }
    sort(attRank.begin(),attRank.end());
    int r=10000*attRank[0].second+100*attRank[1].second+attRank[2].second;
    return r;
}