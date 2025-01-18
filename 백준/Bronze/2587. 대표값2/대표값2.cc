#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int elem, s=0;
    vector<int> num;
    for (int i = 0; i < 5; i++) {
        cin >> elem;
        num.push_back(elem);
        s += num[i];
    }
    sort(num.begin(), num.end(), less<int>());
    cout << s / 5 << endl;
    cout << num[5 / 2];
    return 0;
}