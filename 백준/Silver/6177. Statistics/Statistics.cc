#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    double total = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end(), less<int>());
    cout << fixed;
    cout.precision(6);
    cout << total / n << "\n";
    cout << (n % 2 != 0 ? arr[n / 2] : (arr[n / 2 - 1] + arr[n / 2]) / 2.0);
    return 0;
}