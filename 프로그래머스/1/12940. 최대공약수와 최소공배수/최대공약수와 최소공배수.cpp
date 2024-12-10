#include <string>
#include <vector>
#include <iostream>
using namespace std;

int gcd(const int x, const int y) {
    if(x%y==0)
        return y;
    else
        return gcd(y,x%y);
}

vector<int> solution(int n, int m) {
    int gc=gcd(n,m);
    vector<int> r={gc,n*m/gc};
    return r;
}