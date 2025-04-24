#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total, cnt[2] = {0, 0};
    vector<int> arr(4, 0);
    for (int i = 0; i < 5; i++) {
        total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            total += arr[j];
        }
        if (cnt[1] < total) {
            cnt[0] = i + 1;
            cnt[1] = total;
        }
    }
    cout << cnt[0] << ' ' << cnt[1];
    return 0;
}