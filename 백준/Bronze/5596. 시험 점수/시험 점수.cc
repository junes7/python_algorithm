#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int sums, sumt;
    vector<int> s(4), t(4);
    for (int i = 0; i < 4; i++)
        cin >> s[i];
    for (int i = 0; i < 4; i++)
        cin >> t[i];
    sums = accumulate(s.begin(), s.end(), 0);
    sumt = accumulate(t.begin(), t.end(), 0);
    cout << (sums >= sumt ? sums : sumt);
    return 0;
}