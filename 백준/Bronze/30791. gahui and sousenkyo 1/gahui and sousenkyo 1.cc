#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, cnt = 0;
    cin >> t;
    vector<int> arr(4);
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        if (abs(arr[i] - t) <= 1000) cnt += 1;
    }
    cout << cnt;
    return 0;
}