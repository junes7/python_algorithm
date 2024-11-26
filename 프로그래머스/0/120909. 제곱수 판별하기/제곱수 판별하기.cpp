#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int r=0;
    // if((double)sqrt(n)%1==0.0)
    //     r=1;
    // else
    //     r=2;
    r=(sqrt(n)==(int)sqrt(n))?1:2;
    return r;
}