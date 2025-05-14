#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int diff;
    vector<int> arr(3);
    while (true) {
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        if (arr[1] == 0 && arr[2] == 0) break;
        diff = arr[1] - arr[0] == arr[2] - arr[1] ? arr[1] - arr[0] : arr[1] / arr[0];
        if (arr[1] - arr[0] == arr[2] - arr[1])
            cout << "AP" << ' ' << arr[2] + diff << "\n";
        else
            cout << "GP" << ' ' << arr[2] * diff << "\n";
    }
    return 0;
}