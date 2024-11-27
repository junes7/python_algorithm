#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=0,i=1;
    while(true) {
        if((6*i)%n==0) {
            r=i;
            break;   
        }
        i++;
    }
    return r;
}