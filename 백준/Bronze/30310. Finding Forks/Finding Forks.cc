#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> fork_cnt(n);
    for (int i = 0; i < n; i++)
        cin >> fork_cnt[i];
    sort(fork_cnt.begin(), fork_cnt.end(), less<int>());
    cout << fork_cnt[0] + fork_cnt[1];
    return 0;
}