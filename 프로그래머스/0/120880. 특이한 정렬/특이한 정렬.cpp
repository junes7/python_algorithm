#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int t;
bool compare(const int a, const int b) {
    if(abs(t-a)==abs(t-b))
        return a>b;
    return abs(t-a)<abs(t-b);
}

vector<int> solution(vector<int> numlist, int n) {
    t=n;
    sort(numlist.begin(),numlist.end(),compare);
    return numlist;
}