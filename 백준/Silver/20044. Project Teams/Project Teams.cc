#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, minn;
    cin >> n;
    k = 2 * n;
    vector<int> arr(k);
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    minn = arr[0] + arr[k - 1];
    for (int i = 1; i < n; i++) {
        if (minn > arr[i] + arr[k - (i + 1)])
            minn = arr[i] + arr[k - (i + 1)];
    }
    cout << minn;
    return 0;
}