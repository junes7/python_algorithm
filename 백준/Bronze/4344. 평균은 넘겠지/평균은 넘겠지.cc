#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int c, n, avg, cnt = 0;
    cin >> c;
    vector<int> arr;
    for (int i = 0; i < c; i++) {
        cin >> n;
        arr = {};
        for (int j = 0; j < n; j++) {
            cin >> cnt;
            arr.push_back(cnt);
        }
        cnt = 0;
        avg = accumulate(arr.begin(), arr.end(), 0) / n;
        for (int j = 0; j < n; j++) {
            if (arr[j] > avg)
                cnt += 1;
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)cnt * 100 / n << "%\n";
    }
    return 0;
}