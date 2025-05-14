#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> arr(n), rlt(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (i == 0)
            rlt[i] = arr[0];
        else
            rlt[i] = arr[i] * (i + 1) - accumulate(rlt.begin(), rlt.end(), 0);
        cout << rlt[i] << ' ';
    }
    return 0;
}