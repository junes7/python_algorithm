#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    vector<int> arr(10);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++)
            cin >> arr[j];
        sort(arr.begin(), arr.end(), greater<int>());
        cout << arr[2] << "\n";
    }
    return 0;
}