#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> r;
    map<string,int> rank;
    int n;
    string t;
    for(int i=0;i<players.size();i++) {
        rank[players[i]]=i;
    }
    for(int i=0;i<callings.size();i++) {
        n=rank[callings[i]];
        // rank update
        rank[callings[i]]-=1;
        rank[players[n-1]]+=1;
        // player swap
        t=players[n-1];
        players[n-1]=players[n];
        players[n]=t;
    }
    vector<pair<string,int>> vrank(rank.begin(),rank.end());
    sort(vrank.begin(),vrank.end(),[](const pair<string,int>& a, const pair<string,int>& b){
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
    });
    for(auto num:vrank) {
        r.push_back(num.first);
    }
    return r;
}