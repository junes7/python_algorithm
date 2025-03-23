#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    cout << 1 + arr[1] + arr[2] + arr[3];
    return 0;
}