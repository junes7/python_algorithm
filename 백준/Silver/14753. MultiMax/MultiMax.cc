#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, mul3, mul2;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    mul3 = max(arr[0] * arr[1] * arr[n - 1], arr[n - 3] * arr[n - 2] * arr[n - 1]);
    mul2 = max(arr[0] * arr[1], arr[n - 2] * arr[n - 1]);
    cout << max(mul3, mul2);
    return 0;
}