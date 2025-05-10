#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt;
    cin >> n;
    long long minn = pow(2, 63) - 1;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = arr[i]; j < arr[i] + 5; j++) {
            if (find(arr.begin(), arr.end(), j) == arr.end())
                cnt += 1;
        }
        minn = minn < cnt ? minn : cnt;
    }
    cout << minn;
    return 0;
}