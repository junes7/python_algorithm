#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int r=(angle/90)*2+(angle%90==0?0:1);
    return r;
}