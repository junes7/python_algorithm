#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int k, n, cnt;
    long long left = 1, right, mid;
    vector<int> lines;
    cin >> k >> n;
    for (int i = 0; i < k; i++) {
        cin >> cnt;
        lines.push_back(cnt);
    }
    right = *max_element(lines.begin(), lines.end());
    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 0;
        for (int i = 0; i < k; i++) {
            cnt += lines[i] / mid;
        }
        if (cnt < n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    cout << right;
    return 0;
}