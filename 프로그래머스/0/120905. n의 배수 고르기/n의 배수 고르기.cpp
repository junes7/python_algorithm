#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> r;
    for(int i=0;i<numlist.size();i++) {
        if(numlist[i]%n==0)
            r.push_back(numlist[i]);
    }
    return r;
}