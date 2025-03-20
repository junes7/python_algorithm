#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, rlt = 0;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    for (int i = 0; i < 3; i++) {
        vector<int> arr_copy(arr.begin(), arr.end());
        t = arr_copy[i];
        arr_copy.erase(arr_copy.begin() + i);
        if (t == arr_copy[0] + arr_copy[1]) {
            rlt = 1;
            break;
        } else if (t == arr_copy[0] * arr_copy[1]) {
            rlt = 2;
            break;
        } else {
            rlt = 3;
        }
    }
    cout << rlt;
    return 0;
}