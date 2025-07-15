#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, idx;
    cin >> n >> idx;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<string>());
    cout << arr[idx - 1];
    return 0;
}