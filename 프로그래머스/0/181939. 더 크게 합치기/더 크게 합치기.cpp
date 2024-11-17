#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string ch1=to_string(a), ch2=to_string(b);
    int r=stoi((stoi(ch1+ch2) > stoi(ch2+ch1))?(ch1+ch2):(ch2+ch1));
    return r;
}