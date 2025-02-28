#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr(5);
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        arr[i] = pow(arr[i], 2);
    }
    cout << accumulate(arr.begin(), arr.end(), 0) % 10;
    return 0;
}