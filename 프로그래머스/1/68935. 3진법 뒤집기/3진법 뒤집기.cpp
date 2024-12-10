#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int r=0;
    string num;
    while(n>0) {
        num+=to_string(n%3);
        n/=3;
    }
    reverse(num.begin(),num.end());
    for(int i=0;i<num.length();i++) {
        r+=(num[i]-48)*pow(3,i);
    }
    return r;
}