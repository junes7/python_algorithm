#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i] / 2 + (arr[i] % 2 == 0 ? 0 : 1);
    }
    cout << s;
    return 0;
}