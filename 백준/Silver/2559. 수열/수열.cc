#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, k, s = 0, elem;
    cin >> n >> k;
    vector<int> num;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        s += elem;
        num.push_back(s);
    }
    elem = num[k - 1];
    for (int i = k; i < n; i++)
        elem = max(elem, num[i] - num[i - k]);
    cout << elem;
    return 0;
}