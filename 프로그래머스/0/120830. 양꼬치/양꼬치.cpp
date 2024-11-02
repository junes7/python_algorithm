#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int r=n*12000+(k-(n/10))*2000;
    return r;
}