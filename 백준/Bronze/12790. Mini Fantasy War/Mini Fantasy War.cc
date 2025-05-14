#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, elem;
    cin >> n;
    vector<int> arr(4);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++)
            cin >> arr[j];
        for (int j = 0; j < 4; j++) {
            cin >> elem;
            arr[j] += elem;
        }
        for (int j = 0; j < 3; j++) {
            if (arr[j] < 1)
                arr[j] = j - 2 == 0 ? 0 : 1;
        }
        cout << 1 * arr[0] + 5 * arr[1] + 2 * arr[2] + 2 * arr[3] << "\n";
    }
    return 0;
}