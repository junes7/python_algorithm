#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, x, idx = 0;
    cin >> n >> x;
    vector<int> arr(n), rlt(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++)
        rlt[idx++] = (arr[i] + arr[i + 1]) * x;
    cout << *min_element(rlt.begin(), rlt.begin() + (n - 1));
    return 0;
}