#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> r;
    vector<pair<int,int>> t;
    int acc=1, sum;
    for(int i=0;i<score.size();i++) {
        t.push_back({(score[i][0]+score[i][1]),0});
    }
    // sort(t.begin(),t.end(),greater<pair<int,int>>());
    // for(int i=0;i<t.size();i++) {
    //     if(t[i].first!=t[i-1].first)
    //         acc=1+i;
    //     t[i].second=acc;
    // }
    // for(int i=0;i<score.size();i++) {
    //     sum=(score[i][0]+score[i][1]);
    //     for(int j=0;j<t.size();j++) {
    //         if(t[j].first==sum) {
    //             r.push_back(t[j].second);
    //             break;
    //         }
    //     }
    // }
    for(int i=0;i<score.size();i++) {
        for(int j=0;j<score.size();j++) {
            if(t[i].first<t[j].first)
                t[i].second+=1;
        }
        t[i].second+=1;
        r.push_back(t[i].second);
    }
    return r;
}