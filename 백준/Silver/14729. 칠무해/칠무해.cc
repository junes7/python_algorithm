#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), less<double>());
    cout << fixed;
    cout.precision(3);
    for (int i = 0; i < 7; i++)
        cout << arr[i] << "\n";
    return 0;
}