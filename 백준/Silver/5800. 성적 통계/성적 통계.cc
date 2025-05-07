#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int k, n, maxdiff, maxn, minn;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        maxdiff = 0, maxn = 0, minn = 100;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            if (maxn < arr[j])
                maxn = arr[j];
            if (minn > arr[j])
                minn = arr[j];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        for (int j = 0; j < n - 1; j++)
            if (maxdiff < arr[j] - arr[j + 1])
                maxdiff = arr[j] - arr[j + 1];
        cout << "Class " << i + 1 << "\n";
        cout << "Max " << maxn << ", Min " << minn << ", Largest gap " << maxdiff << "\n";
    }
    return 0;
}