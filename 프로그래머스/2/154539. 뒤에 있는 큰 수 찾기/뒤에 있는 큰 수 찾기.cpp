#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int l=numbers.size();
    vector<int> r(l,-1);
    stack<int> stk;
    for(int i=0;i<l;i++) {
        while(!stk.empty() and numbers[stk.top()] < numbers[i]) {
            r[stk.top()]=numbers[i];
            stk.pop();
        }
        stk.push(i);
    }
    return r;
}