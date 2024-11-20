#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int r=0;
    for(int i=0;i<num_str.length();i++) {
        r+=num_str[i]-48;
    }
    return r;
}