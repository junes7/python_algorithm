#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int s;
    vector<int> arr(10);
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    s = accumulate(arr.begin(), arr.end(), 0);
    for (int i = 0; i < 10; i++) {
        if (s - arr[i] == arr[i]) {
            cout << arr[i];
            break;
        }
    }
    return 0;
}