#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> arr(5);
        for (int j = 0; j < 5; j++)
            cin >> arr[j];
        sort(arr.begin(), arr.end());
        if (arr[arr.size() - 2] - arr[1] >= 4)
            cout << "KIN" << "\n";
        else
            cout << accumulate(arr.begin() + 1, arr.end() - 1, 0) << "\n";
    }
    return 0;
}