#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)) {
        cout << 1;
    } else {
        cout << (arr[0] == arr[1] && arr[1] == arr[2] ? 2 : 0);
    }
    return 0;
}