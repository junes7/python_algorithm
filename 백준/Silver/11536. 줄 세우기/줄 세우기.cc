#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<string> arr(n), arr_copy(n), arr_dec_copy(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    copy(arr.begin(), arr.end(), arr_copy.begin());
    sort(arr_copy.begin(), arr_copy.end(), less<string>());
    copy(arr.begin(), arr.end(), arr_dec_copy.begin());
    sort(arr_dec_copy.begin(), arr_dec_copy.end(), greater<string>());
    cout << (arr == arr_copy ? "INCREASING" : (arr == arr_dec_copy ? "DECREASING" : "NEITHER"));
    return 0;
}