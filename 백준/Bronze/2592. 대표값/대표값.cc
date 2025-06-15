#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int tot = 0, n;
    vector<int> cnt(1000, 0);
    for (int i = 0; i < 10; i++) {
        cin >> n;
        tot += n;
        cnt[n] += 1;
    }
    cout << tot / 10 << "\n";
    cout << find(cnt.begin(), cnt.end(), *max_element(cnt.begin(), cnt.end())) - cnt.begin();
    return 0;
}