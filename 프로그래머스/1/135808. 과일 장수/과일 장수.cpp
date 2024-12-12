#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int r=0;
    vector<int> t;
    sort(score.begin(),score.end(),greater<int>());
    for(int i=0;i<score.size()/m;i++) {
        t={};
        for(int j=m*i;j<m*(i+1);j++) {
            t.push_back(score[j]);
        }
        r+=*min_element(t.begin(),t.end())*m;
    }
    return r;
}