#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, elem;
    bool flag;
    vector<int> arr, rlt;
    while (cin >> n) {
        arr = {}, rlt = {}, flag = true;
        for (int i = 0; i < n; i++) {
            cin >> elem;
            arr.push_back(elem);
        }
        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) > n - 1) {
                flag = false;
                break;
            }
            rlt.push_back(abs(arr[i] - arr[i + 1]));
        }
        if (flag) {
            sort(rlt.begin(), rlt.end(), less<int>());
            for (int i = 0; i < n - 2; i++) {
                if (i + 1 != rlt[i]) {
                    flag = false;
                    break;
                }
            }
            cout << (flag ? "Jolly" : "Not jolly") << "\n";
        } else {
            cout << "Not jolly" << "\n";
        }
    }
    return 0;
}