#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int r=(n/7)+((n%7>0)?1:0);
    return r;
}