#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> ingredient) {
    int r=0;
    vector<int> t={-1};
    for(int x: ingredient) {
        if(t.back()==1 and x==2) t.back()=12;
        else if(t.back()==12 and x==3) t.back()=123;
        else if(t.back()==123 and x==1) r++,t.pop_back();
        else t.push_back(x);
    }
    return r;
}