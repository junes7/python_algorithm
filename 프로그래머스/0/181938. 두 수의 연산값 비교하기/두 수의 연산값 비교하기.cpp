#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int t=stoi(to_string(a)+to_string(b)), r;
    r=(t>=2*a*b)?t:2*a*b;
    return r;
}