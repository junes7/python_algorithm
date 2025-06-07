#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> trees(n), lmn(n);
    for (int i = 0; i < n; i++) {
        cin >> trees[i];
        lmn[i] = trees[i] - (n - i);
    }
    cout << *max_element(lmn.begin(), lmn.end());
    return 0;
}