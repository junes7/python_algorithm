#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(9), rlt;
    int total = 0;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (total - (arr[i] + arr[j]) == 100) {
                for (int k = 0; k < 9; k++)
                    if (k != i && k != j)
                        cout << arr[k] << "\n";
                return 0;
            }
        }
    }
    return 0;
}