#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int r=0;
    if(num1==num2)
        r=1;
    else
        r=-1;
    return r;
}