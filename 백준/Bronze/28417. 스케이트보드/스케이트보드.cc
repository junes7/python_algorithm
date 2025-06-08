#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, maxr, elem, rlt = 0;
    cin >> t;
    vector<int> trick(5);
    for (int i = 0; i < t; i++) {
        maxr = 0;
        for (int j = 0; j < 2; j++) {
            cin >> elem;
            if (maxr < elem)
                maxr = elem;
        }
        for (int j = 0; j < 5; j++) {
            cin >> trick[j];
        }
        sort(trick.begin(), trick.end(), greater<int>());
        rlt = max(rlt, maxr + trick[0] + trick[1]);
    }
    cout << rlt;
    return 0;
}