#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> r;
    vector<pair<int,double>> t;
    int cnt,l=stages.size();
    for(int i=1;i<N+1;i++) {
        cnt=count(stages.begin(),stages.end(),i);
        t.push_back({i,(cnt==0)?0:(double)cnt/l});
        l-=cnt;
    }
    sort(t.begin(),t.end(),[](const pair<int,double> &pa, const pair<int,double> &pb) {
        return (pa.second==pb.second)?pa.first<pb.first:pa.second>pb.second;
    });
    for(pair<int,double> idx: t) {
        r.push_back(idx.first);
    }
    return r;
}