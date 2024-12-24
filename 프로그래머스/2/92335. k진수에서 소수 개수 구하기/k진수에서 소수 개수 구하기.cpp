#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

bool is_prime(long num) {
    if(num<2)
        return false;
    for(int i=2;i<(int)pow(num,0.5)+1;i++) {
        if(num%i==0)
            return false;
    }
    return true;
}

int solution(int n, int k) {
    int r=0;
    string t;
    while(n>0) {
        t=to_string(n%k)+t;
        n/=k;
    }
    stringstream ss(t);
    while(getline(ss,t,'0')) {
        if(!t.empty() and is_prime(stol(t)))
            r+=1;
    }
    return r;
}