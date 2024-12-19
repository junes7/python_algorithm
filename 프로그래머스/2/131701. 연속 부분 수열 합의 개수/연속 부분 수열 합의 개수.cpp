#include <string>
#include <vector>
#include <deque>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int s;
    deque<int> dq;
    set<int> r;
    for(int i=0;i<elements.size();i++) {
        dq.push_back(elements[i]);
    }
    // iterator 선언
    deque<int>::iterator iter;
    for(int i=0;i<elements.size();i++) {
        s=0;
        for(iter=dq.begin();iter!=dq.end();iter++) {
            s+=*iter;   
            r.insert(s);
        }
        dq.pop_front();
        dq.push_back(elements[i]);
    }
    return r.size();
}