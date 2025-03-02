#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, t, S, I, C, ans, start, end, mid;
    cin >> n >> t;
    vector<int> time, result;
    for (int i = 0; i < n; i++) {
        cin >> S >> I >> C;
        time = {};
        for (int k = 0; k < C; k++)
            time.push_back(S + I * k);
        if (time[C - 1] < t) continue;
        start = 0, end = C - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (time[mid] >= t) {
                ans = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }
        result.push_back(time[ans] - t);
    }
    cout << (result.size() > 0 ? *min_element(result.begin(), result.end()) : -1);
    return 0;
}