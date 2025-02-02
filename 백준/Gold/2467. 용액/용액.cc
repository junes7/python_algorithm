#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, left, right, rst, rsta, rstb, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> rst;
        arr.push_back(rst);
    }
    left = 0, right = n - 1;
    rst = abs(arr[left] + arr[right]);
    rsta = arr[left];
    rstb = arr[right];
    while (left < right) {
        temp = arr[left] + arr[right];
        if (abs(temp) <= rst) {
            rst = abs(temp);
            rsta = arr[left];
            rstb = arr[right];
        }
        if (temp < 0)
            left += 1;
        else
            right -= 1;
    }
    cout << rsta << ' ' << rstb;
    return 0;
}