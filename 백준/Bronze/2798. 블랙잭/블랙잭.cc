#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, elem;
    vector<int> num, suml;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        num.push_back(elem);
    }
    sort(num.begin(), num.end(), greater<int>());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                elem = num[i] + num[j] + num[k];
                if (elem == m) {
                    suml.push_back(elem);
                    break;
                } else if (elem < m) {
                    suml.push_back(elem);
                }
            }
        }
    }
    cout << *max_element(suml.begin(), suml.end());
    return 0;
}