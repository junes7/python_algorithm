#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n;
    cin >> t;
    bool flag;
    for (int i = 0; i < t; i++) {
        cin >> n;
        flag = true;
        vector<int> arr(n);
        cout << "Denominations: ";
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            cout << arr[j] << ' ';
        }
        cout << "\n";
        for (int j = 1; j < n; j++) {
            if ((arr[j - 1] << 1) > arr[j]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Good coin denominations!" : "Bad coin denominations!") << "\n\n";
    }
    return 0;
}