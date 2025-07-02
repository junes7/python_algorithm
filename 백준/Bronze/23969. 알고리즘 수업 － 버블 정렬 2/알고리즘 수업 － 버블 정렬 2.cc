#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, t, cnt = 0, temp;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                cnt += 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                if (cnt == k) {
                    for (int t = 0; t < n; t++)
                        cout << arr[t] << ' ';
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}