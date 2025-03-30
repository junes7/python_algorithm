#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    vector<int> arr(4);
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    cin >> n;
    cout << (s >= n * 4 ? 0 : (n * 4) - s);
    return 0;
}