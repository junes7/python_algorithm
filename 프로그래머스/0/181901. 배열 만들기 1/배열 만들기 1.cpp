#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> r;
    for(int i=1; i<n+1; i++) {
        if(i%k==0)
            r.push_back(i);
    }
    return r;
}