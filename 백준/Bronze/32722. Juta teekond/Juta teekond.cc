#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    bool flag = true;
    vector<vector<int>> arr = {{1, 3}, {6, 8}, {2, 5}};
    for (int i = 0; i < 3; i++) {
        cin >> n;
        if (find(arr[i].begin(), arr[i].end(), n) == arr[i].end()) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "JAH" : "EI");
    return 0;
}