#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> r=arr;
    int n=0;
    while(pow(2,n)<arr.size()) {
        n++;
    }
    for(int i=0;i<pow(2,n)-arr.size();i++) {
        r.push_back(0);
    }
    return r;
}