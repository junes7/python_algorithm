#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    cout << arr[k - 1];
    return 0;
}