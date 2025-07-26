#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, rlt;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        rlt = 0;
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] > arr[k])
                    rlt += 1;
            }
        }
        cout << "Optimal train swapping takes " << rlt << " swaps.\n";
    }
    return 0;
}