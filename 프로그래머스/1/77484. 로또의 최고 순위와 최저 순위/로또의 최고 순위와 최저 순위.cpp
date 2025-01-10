#include <string>
#include <vector>
#include <map>
#include <iostream>
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
    r.push_back(rank.find(l-mis)!=rank.end()?rank[l-mis]:6);
    r.push_back(rank.find(l-mis-zero)!=rank.end()?rank[l-mis-zero]:6);
    return r;
}