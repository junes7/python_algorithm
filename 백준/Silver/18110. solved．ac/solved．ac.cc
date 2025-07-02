#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, t;
    double total = 0;
    cin >> n;
    vector<int> arr(n);
    t = round(n * 0.15);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = t; i < n - t; i++)
        total += arr[i];
    cout << (n - 2 * t > 0 ? round(total / (n - 2 * t)) : 0);
    return 0;
}