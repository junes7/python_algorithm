#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int r=(str1.find(str2)!=string::npos)?1:2;
    return r;
}