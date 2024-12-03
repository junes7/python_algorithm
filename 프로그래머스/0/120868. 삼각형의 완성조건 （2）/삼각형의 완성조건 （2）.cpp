#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int r=2*(*min_element(sides.begin(),sides.end()))-1;
    return r;
}