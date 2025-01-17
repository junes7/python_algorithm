#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main(void) {
    int elem;
    vector<int> num;
    for (int i = 0; i < 3; i++) {
        cin >> elem;
        num.push_back(elem);
    }
    sort(num.begin(), num.end(), less<int>());
    while (num[num.size() - 1] >= num[0] + num[1]) {
        num[num.size() - 1] -= 1;
    }
    cout << accumulate(num.begin(), num.end(), 0);
    return 0;
}