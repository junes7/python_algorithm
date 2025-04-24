#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), cnt(2, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]] += 1;
    }
    cout << (cnt[0] > cnt[1] ? "Junhee is not cute!" : "Junhee is cute!");
    return 0;
}