#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> r;
    for(int i=1;i<n+1;i++) {
        if(n%i==0)
            r.push_back(i);
    }
    return r;
}