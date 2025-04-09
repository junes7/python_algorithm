#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    vector<int> arr(2);
    cin >> t;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 2; j++)
            cin >> arr[j];
        cin >> n;
        cout << "Data set: " << arr[0] << ' ' << arr[1] << ' ' << n << "\n";
        for (int j = 0; j < n; j++) {
            if (arr[0] > arr[1])
                arr[0] /= 2;
            else
                arr[1] /= 2;
        }
        sort(arr.begin(), arr.end(), greater<int>());
        cout << arr[0] << ' ' << arr[1] << "\n\n";
    }
    return 0;
}