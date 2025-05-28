#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int rlt = 1;
    bool isOdd = false;
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i] % 2 != 0) {
            rlt *= arr[i];
            isOdd = true;
        }
    }
    cout << (isOdd ? rlt : arr[0] * arr[1] * arr[2]);
    return 0;
}