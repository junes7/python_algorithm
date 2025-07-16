#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(7);
    for (int i = 0; i < 7; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    cout << arr[0] << ' ' << arr[1] << ' ' << arr[arr.size() - 1] - arr[0] - arr[1];
    return 0;
}