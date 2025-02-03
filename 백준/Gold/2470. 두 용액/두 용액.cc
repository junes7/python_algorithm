#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, left = 0, right, rst, rsta, rstb, temp;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> rst;
        arr.push_back(rst);
    }
    sort(arr.begin(), arr.end(), less<int>());
    right = n - 1;
    rst = abs(arr[left] + arr[right]);
    rsta = arr[left];
    rstb = arr[right];
    while (left < right) {
        temp = arr[left] + arr[right];
        if (abs(temp) < rst) {
            rst = abs(temp);
            rsta = arr[left];
            rstb = arr[right];
        }
        if (temp > 0)
            right -= 1;
        else
            left += 1;
    }
    cout << rsta << ' ' << rstb;
    return 0;
}