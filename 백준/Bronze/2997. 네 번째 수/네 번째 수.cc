#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int diff1, diff2;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    diff1 = arr[1] - arr[0];
    diff2 = arr[2] - arr[1];
    if (diff1 == diff2) {
        cout << arr[2] * 2 - arr[1];
    } else if (diff1 > diff2) {
        cout << arr[1] * 2 - arr[2];
    } else {
        cout << arr[1] * 2 - arr[0];
    }
    return 0;
}