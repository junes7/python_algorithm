#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> r;
    for(long long i=left;i<right+1;i++) {
        r.push_back(max(i/n,i%n)+1);
    }
    return r;
}