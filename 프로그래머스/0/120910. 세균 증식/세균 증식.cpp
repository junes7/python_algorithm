#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int t) {
    // int r=n*pow(2,t);
    int r=n<<t;
    return r;
}