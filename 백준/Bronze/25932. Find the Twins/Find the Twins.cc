#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, idx;
    cin >> n;
    vector<int> arr(10), rlt;
    for (int i = 0; i < n; i++) {
        idx = 0, rlt = {};
        for (int j = 0; j < 10; j++) {
            cin >> arr[j];
            cout << arr[j] << ' ';
            if (arr[j] == 17 || arr[j] == 18)
                rlt.push_back(arr[j]);
        }
        cout << "\n";
        if (rlt.size() == 2)
            cout << "both\n\n";
        else if (rlt.size() == 1)
            cout << (rlt[0] == 17 ? "zack" : "mack") << "\n\n";
        else
            cout << "none\n\n";
    }
    return 0;
}