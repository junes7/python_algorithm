#include <string>
#include <vector>

using namespace std;

long combination(int n, int r) {
    long sum=1;
    for(int i=1;i<r+1;i++) {
        sum=(sum*n--)/i;
    }
    return sum;
}

int solution(int balls, int share) {
    return combination(balls,share);
}