#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, t, s, len, total;
    cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> arr(21);
        for (int j = 0; j < 21; j++)
            cin >> arr[j];
        len = arr.size(), total = 0;
        for (int j = 1; j < len - 1; j++) {
            for (int k = j + 1; k < len; k++) {
                if (arr[j] > arr[k]) {
                    s = arr[j];
                    arr[j] = arr[k];
                    arr[k] = s;
                    total += 1;
                }
            }
        }
        cout << arr[0] << ' ' << total << "\n";
    }
    return 0;
}