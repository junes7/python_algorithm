#include <string>
#include <vector>

using namespace std;

int gcd(int x, int y) {
    return (x%y==0)?y:gcd(y,x%y);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> r;
    int numer=denom1*numer2+denom2*numer1;
    int denom=denom1*denom2;
    r.push_back(numer/gcd(numer,denom));
    r.push_back(denom/gcd(numer,denom));
    return r;
}