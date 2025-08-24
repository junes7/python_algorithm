#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m), rlt;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    for (int i = 1; i < n + 1; i++) {
        for (int j = 0; j < m; j++) {
            if (i % arr[j] == 0) {
                if (find(rlt.begin(), rlt.end(), i) == rlt.end())
                    rlt.push_back(i);
            }
        }
    }
    cout << accumulate(rlt.begin(), rlt.end(), 0);
    return 0;
}