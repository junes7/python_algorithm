#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> r;
    vector<int> t;
    for(int i=0;i<score.size();i++) {
        if(i<k)
            t.push_back(score[i]);
        else {
            for(int j=0;j<t.size();j++) {
                if(score[i]>t[j]) {
                    t[j]=score[i];
                    break;
                }
            }
        }
        sort(t.begin(),t.end(),less<int>());
        r.push_back(t[0]);
    }
    return r;
}