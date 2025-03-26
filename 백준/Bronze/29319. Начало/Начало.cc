#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, maxn = 0, cnt = 0;
    cin >> n;
    vector<int> arr(n), called;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (maxn < arr[i])
            maxn = arr[i];
    }
    for (int i = 1; i < maxn + 1; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= arr[j]) {
                if (find(called.begin(), called.end(), i) == called.end())
                    called.push_back(i);
                else
                    cnt += 1;
            }
        }
    }
    cout << cnt;
    return 0;
}