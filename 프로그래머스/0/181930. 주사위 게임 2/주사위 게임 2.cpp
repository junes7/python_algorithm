#include <string>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int solution(int a, int b, int c) {
    int r = 1;
    set<int> num={a,b,c};
    // num.insert(a);
    // num.insert(b);
    // num.insert(c);  
    for(int i=1;i<=4-num.size();i++) {
        r*=pow(a,i)+pow(b,i)+pow(c,i);
    }
    return r;
}