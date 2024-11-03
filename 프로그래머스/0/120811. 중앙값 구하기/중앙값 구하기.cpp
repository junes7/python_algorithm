#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int r=0;
    sort(array.begin(),array.end(),less<int>());
    r=array[array.size()/2];
    return r;
}