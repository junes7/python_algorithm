#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int off, on;
    vector<int> total(4, 0);
    for (int i = 0; i < 4; i++) {
        cin >> off >> on;
        total[i] = (i == 0 ? 0 : total[i - 1]) - off + on;
    }
    cout << *max_element(total.begin(), total.end());
    return 0;
}