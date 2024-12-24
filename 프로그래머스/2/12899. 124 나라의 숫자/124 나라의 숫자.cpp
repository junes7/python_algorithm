#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

string solution(int n) {
    string r="";
    deque<int> dq;
    while(n>0) {
        dq.push_front(n%3);
        n/=3;
    }
    while(find(dq.begin(),dq.end(),0)!=dq.end()) {
        for(int i=1;i<dq.size();i++) {
            if(dq[i]==0) {
                dq[i]=4;
                dq[i-1]=dq[i-1]==4?2:(dq[i-1]==2?1:0);
            }
        }
        if(dq[0]==0)
            dq.pop_front();
    }
    for(int i=0;i<dq.size();i++) {
        r+=to_string(dq[i]);    
    }
    return r;
}