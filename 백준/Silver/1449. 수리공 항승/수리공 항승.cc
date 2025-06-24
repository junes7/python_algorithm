#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, l, st, cnt = 1;
    cin >> n >> l;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        cin >> data[i];
    sort(data.begin(), data.end(), less<int>());
    st = data[0];
    for (int i = 1; i < n; i++) {
        if (st <= data[i] && data[i] < st + l)
            continue;
        else {
            st = data[i];
            cnt += 1;
        }
    }
    cout << cnt;
    return 0;
}