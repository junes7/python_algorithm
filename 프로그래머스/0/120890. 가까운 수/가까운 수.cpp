#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int r = 0, idx=0;
    vector<int> diff;
    sort(array.begin(),array.end());
    for(int i=0;i<array.size();i++) {
        diff.push_back(abs(n-array[i]));
    }
    r=array[min_element(diff.begin(),diff.end())-diff.begin()];
    return r;
}