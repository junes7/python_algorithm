#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int r=number%n==0 and number%m==0?1:0;
    return r;
}