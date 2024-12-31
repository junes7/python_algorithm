#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int slice, int n) {
    int r=n/slice+(n%slice>0);
    // int r=n/slice+((n%slice==0)?0:1);
    return r;
}