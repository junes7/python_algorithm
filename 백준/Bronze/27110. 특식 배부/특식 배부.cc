#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        s += arr[i] > n ? n : arr[i];
    }
    cout << s;
    return 0;
}