#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s, start = 0, end = 0, sum_arr, length;
    cin >> n >> s;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> length;
        arr.push_back(length);
    }
    sum_arr = arr[0], length = n + 1;
    while (true) {
        if (sum_arr < s) {
            end += 1;
            if (end == n)
                break;
            sum_arr += arr[end];
        } else {
            length = min(length, end - start + 1);
            sum_arr -= arr[start++];
        }
    }
    cout << (length == n + 1 ? 0 : length);
    return 0;
}