#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int total = 0;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        total += arr[i];
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == total - arr[i]) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}