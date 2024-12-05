#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int s=0;
    while(chicken>=10) {
        s+=chicken/10;
        chicken=chicken/10+chicken%10;
    }
    return s;
}