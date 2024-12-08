#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long r=0;
    double t=pow(n,0.5);
    r=(t-(int)t==0)?pow(t+1,2):-1;
    return r;
}