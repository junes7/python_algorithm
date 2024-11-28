#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int r=0;
    for(int i=0;i<number.length();i++) {
        r+=number[i]-48;
    }
    r%=9;
    return r;
}