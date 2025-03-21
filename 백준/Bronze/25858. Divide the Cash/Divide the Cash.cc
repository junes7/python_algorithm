#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, d, s = 0;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] * d / s << "\n";
    return 0;
}