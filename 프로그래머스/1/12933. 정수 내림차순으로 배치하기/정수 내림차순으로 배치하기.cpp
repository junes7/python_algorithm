#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long r=0;
    string num=to_string(n);
    sort(num.begin(),num.end(),greater<int>());
    r=stoll(num);
    return r;
}