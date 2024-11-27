#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int sum=0;
    for(int i=0;i<sides.size();i++) {
        sum+=sides[i];
    }
    int maxElem=*max_element(sides.begin(),sides.end());
    int r=(sum-maxElem>maxElem)?1:2;
    return r;
}