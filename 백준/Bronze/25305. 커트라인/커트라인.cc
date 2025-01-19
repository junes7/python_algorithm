#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k, elem;
    vector<int> num;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        num.push_back(elem);
    }
    sort(num.begin(), num.end(), greater<int>());
    cout << num[k - 1] << endl;
    return 0;
}