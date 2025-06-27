#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    long long rlt = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<int>());
    for (int i = 1; i < n + 1; i++)
        rlt += abs(i - arr[i - 1]);
    cout << rlt;
    return 0;
}