#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i])
            cnt += 1;
    }
    cout << cnt;
    return 0;
}