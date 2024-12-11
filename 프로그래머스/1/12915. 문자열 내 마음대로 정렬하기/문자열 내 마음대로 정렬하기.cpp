#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    stable_sort(strings.begin(),strings.end(),less<string>());
    stable_sort(strings.begin(),strings.end(),[n](const string& a, const string& b) -> bool {
        return a[n]<b[n];
    });
    vector<string> r=strings;
    return r;
}