#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int now_idx,cnt=0;
    queue<int> q;
    for(int i=0;i<priorities.size();i++) {
        q.push(i);
    }
    while(!q.empty()) {
        now_idx=q.front();
        q.pop();
        if(priorities[now_idx]<*max_element(priorities.begin(),priorities.end())) {
            q.push(now_idx);
        } else {
            if(now_idx==location)
                return cnt+1;
            priorities[now_idx]=0;
            cnt++;
        }
    }
}