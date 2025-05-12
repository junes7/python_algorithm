#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, total, minn;
    cin >> n;
    vector<int> arr(7);
    for (int i = 0; i < n; i++) {
        arr = {}, total = 0, minn = 100;
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                total += arr[i];
                if (minn > arr[i])
                    minn = arr[i];
            }
        }
        cout << total << ' ' << minn << "\n";
    }
    return 0;
}