#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int x, y, r;
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cin >> x >> y >> r;
    if (find(arr.begin(), arr.end(), x) != arr.end()) {
        cout << find(arr.begin(), arr.end(), x) - arr.begin() + 1;
    } else {
        cout << 0;
    }
    return 0;
}