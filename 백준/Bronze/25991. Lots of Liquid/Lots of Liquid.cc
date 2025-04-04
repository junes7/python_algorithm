#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    double area;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        area += pow(arr[i], 3);
    }
    cout << fixed;
    cout.precision(6);
    cout << pow(area, 1.0 / 3);
    return 0;
}