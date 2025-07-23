#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, diff;
    while (1) {
        cin >> n;
        if (n == 0) break;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), less<int>());
        diff = arr[n - 1];
        for (int i = 1; i < n; i++) {
            if (diff > arr[i] - arr[i - 1])
                diff = arr[i] - arr[i - 1];
        }
        cout << diff << "\n";
    }
    return 0;
}