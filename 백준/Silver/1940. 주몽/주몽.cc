#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, cnt = 0;
    cin >> n;
    cin >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == m)
                cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}