#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    long long ang = 0, s = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        ang = arr[i] == 1 ? ang + 1 : ang - 1;
        s += ang;
    }
    cout << s;
    return 0;
}