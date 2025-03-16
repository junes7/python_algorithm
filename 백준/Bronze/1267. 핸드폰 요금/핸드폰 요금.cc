#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, sy = 0, sm = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sy += (arr[i] / 30 + 1) * 10;
        sm += (arr[i] / 60 + 1) * 15;
    }
    if (sy == sm)
        cout << 'Y' << ' ' << 'M' << ' ' << sy;
    else if (sy < sm)
        cout << 'Y' << ' ' << sy;
    else
        cout << 'M' << ' ' << sm;
    return 0;
}