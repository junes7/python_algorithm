#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int r=hp/5+(hp%5)/3+(hp%5)%3;
    return r;
}