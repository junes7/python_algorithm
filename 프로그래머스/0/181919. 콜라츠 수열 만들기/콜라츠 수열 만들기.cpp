#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> r={n};
    while(n>1) {
        // if(n%2==0)
        //     n/=2;
        // else
        //     n=3*n+1;
        n=(n%2==0)?n/2:3*n+1;
        r.push_back(n);
    }
    return r;
}