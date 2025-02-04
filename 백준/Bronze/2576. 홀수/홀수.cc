#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int s = 0, minn = 100;
    vector<int> arr(7, 0);
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 1) {
            s += arr[i];
            if (minn > arr[i])
                minn = arr[i];
        }
    }
    cout << (s == 0 ? -1 : s) << "\n";
    if (s > 0)
        cout << minn;
    return 0;
}