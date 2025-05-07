#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, t;
    cin >> n;
    vector<int> arr(n), arr_cpy(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr_cpy[i] = arr[i];
    }
    sort(arr_cpy.begin(), arr_cpy.end(), less<int>());
    for (int i = 0; i < n; i++) {
        t = find(arr_cpy.begin(), arr_cpy.end(), arr[i]) - arr_cpy.begin();
        arr_cpy[t] = -1;
        cout << t << ' ';
    }
    return 0;
}