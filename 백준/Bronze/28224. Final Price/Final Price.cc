#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    cout << s;
    return 0;
}