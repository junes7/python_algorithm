#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, x, elem, s = 0, max_sum, max_cnt;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        arr.push_back(elem);
    }
    s = 0;
    for (int i = 0; i < x; i++) {
        s += arr[i];
    }
    max_sum = s;
    max_cnt = 1;
    for (int i = x; i < n; i++) {
        s -= arr[i - x];
        s += arr[i];
        if (max_sum == s)
            max_cnt += 1;
        else if (max_sum < s) {
            max_sum = s;
            max_cnt = 1;
        }
    }
    if (max_sum == 0)
        cout << "SAD";
    else {
        cout << max_sum << "\n";
        cout << max_cnt;
    }
    return 0;
}