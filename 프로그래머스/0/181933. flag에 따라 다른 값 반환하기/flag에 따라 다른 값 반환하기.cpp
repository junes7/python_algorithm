#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) {
    int r=(flag==true)?a+b:a-b;
    return r;
}