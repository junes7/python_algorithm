#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int now_idx;
    queue<int> q;
    vector<int> s;
    for(int i=0;i<priorities.size();i++) {
        q.push(i);
    }
    while(!q.empty()) {
        now_idx=q.front();
        q.pop();
        if(priorities[now_idx]!=*max_element(priorities.begin(),priorities.end())) {
            q.push(now_idx);
        } else {
            s.push_back(now_idx);
            priorities[now_idx]=0;
        }
    }
    for(int i=0;i<s.size();i++) {
        if(s[i]==location)
            return i+1;
    }
}