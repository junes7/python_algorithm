#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    vector<int> arr(3);
    for (int i = 1; i < t + 1; i++) {
        for (int j = 0; j < 3; j++)
            cin >> arr[j];
        sort(arr.begin(), arr.end(), less<int>());
        cout << "Scenario #" << i << ":\n";
        cout << (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2) ? "yes" : "no") << "\n\n";
    }
    return 0;
}