#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, tar = 0, cnt = 0, maxn = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (tar < arr[i]) {
            tar = arr[i];
            cnt = 0;
        } else
            cnt += 1;
        if (maxn < cnt)
            maxn = cnt;
    }
    cout << maxn;
    return 0;
}