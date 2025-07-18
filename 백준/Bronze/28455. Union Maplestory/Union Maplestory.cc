#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, end, total = 0, abilities = 0;
    cin >> n;
    end = n < 42 ? n : 42;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < end; i++) {
        total += arr[i];
        if (arr[i] >= 250) {
            abilities += 5;
        } else if (arr[i] >= 200) {
            abilities += 4;
        } else if (arr[i] >= 140) {
            abilities += 3;
        } else if (arr[i] >= 100) {
            abilities += 2;
        } else if (arr[i] >= 60) {
            abilities += 1;
        }
    }
    cout << total << ' ' << abilities;
    return 0;
}