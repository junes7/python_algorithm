#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    cout << arr[0] * arr[2];
    return 0;
}