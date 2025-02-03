#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int n, m, elem, left, right, mid;
    vector<int> disc;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        disc.push_back(elem);
    }
    left = *max_element(disc.begin(), disc.end());
    right = accumulate(disc.begin(), disc.end(), 0);
    int cnt, total;
    while (left <= right) {
        mid = (left + right) / 2;
        cnt = 1, total = 0;
        for (int i = 0; i < n; i++) {
            if (total + disc[i] <= mid) {
                total += disc[i];
            } else {
                total = disc[i];
                cnt += 1;
            }
        }
        if (m < cnt)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << left;
    return 0;
}