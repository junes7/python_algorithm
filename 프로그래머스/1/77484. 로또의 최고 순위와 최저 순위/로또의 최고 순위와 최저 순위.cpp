#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> r;
    map<int,int> rank={{6,1},{5,2},{4,3},{3,4},{2,5}};
    int mis=0,zero=0,l=lottos.size();
    for(int i=0;i<l;i++) {
        if(lottos[i]==0)
            zero+=1;
        else {
            if(find(win_nums.begin(),win_nums.end(),lottos[i])==win_nums.end())
                mis+=1;
        }
    }
    if(rank.find(l-mis)==rank.end())
        r.push_back(6);
    else
        r.push_back(rank[l-mis]);
    if(rank.find(l-mis-zero)==rank.end())
        r.push_back(6);
    else
        r.push_back(rank[l-mis-zero]);
    return r;
}