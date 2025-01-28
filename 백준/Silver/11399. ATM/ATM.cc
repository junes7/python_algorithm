#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int n, elem;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> time, times;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        time.push_back(elem);
    }
    sort(time.begin(), time.end(), less<int>());
    for (int i = 0; i < n; i++) {
        times.push_back(accumulate(time.begin(), time.begin() + 1 + i, 0));
    }
    cout << accumulate(times.begin(), times.end(), 0);
    return 0;
}