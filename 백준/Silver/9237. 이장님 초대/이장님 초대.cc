#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 0; i < n; i++)
        arr[i] -= n - 1 - i;
    cout << (n + *max_element(arr.begin(), arr.end()) + 1);
    return 0;
}