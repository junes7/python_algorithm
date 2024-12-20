#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int r=0,tmp,cnt;
    vector<int> idx;
    for(int i=0;i<dungeons.size();i++) {
        idx.push_back(i);
    }
    do{
        tmp=k,cnt=0;
        for(int i=0;i<idx.size();i++) {
            if(tmp>=dungeons[idx[i]][0]) {
                cnt++;
                tmp-=dungeons[idx[i]][1];
            }
        }
        r=max(r,cnt);
    } while(next_permutation(idx.begin(),idx.end()));
    return r;
}