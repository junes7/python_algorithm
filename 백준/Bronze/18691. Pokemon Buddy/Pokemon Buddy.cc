#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> arr = {1, 3, 5};
    int t, g, c, e;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> g >> c >> e;
        cout << (e - c > 0 ? arr[g - 1] * (e - c) : 0) << "\n";
    }
    return 0;
}