#include <string>
#include <vector>

using namespace std;

int gcd(const int x, const int y) {
    return (x%y==0)?y:gcd(y,x%y);
}

vector<int> solution(int n, int m) {
    int gc=gcd(n,m);
    vector<int> r={gc,n*m/gc};
    return r;
}