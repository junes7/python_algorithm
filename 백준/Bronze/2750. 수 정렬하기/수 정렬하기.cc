#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, elem;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        num.push_back(elem);
    }
    sort(num.begin(), num.end(), less<int>());
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }
    return 0;
}