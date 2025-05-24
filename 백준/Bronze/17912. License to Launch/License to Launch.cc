#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, minn = pow(10, 9);
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (minn > arr[i]) {
            minn = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (minn == arr[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}