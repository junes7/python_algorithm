#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int r=0;
    for(int i=0;i<a.size();i++) {
        r+=a[i]*b[i];
    }
    return r;
}