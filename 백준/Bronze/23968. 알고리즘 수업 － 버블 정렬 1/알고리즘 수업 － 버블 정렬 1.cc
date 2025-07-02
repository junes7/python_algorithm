#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, cnt = 0, temp;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                if (cnt == k - 1) {
                    cout << arr[j + 1] << ' ' << arr[j];
                    return 0;
                }
                cnt += 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << -1;
    return 0;
}