#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int len, sums;
    vector<int> sci(4), hist(2), total;
    for (int i = 0; i < 4; i++)
        cin >> sci[i];
    for (int i = 0; i < 2; i++)
        cin >> hist[i];
    len = sci.size();
    for (int i = 0; i < len - 2; i++) {
        for (int j = i + 1; j < len - 1; j++) {
            for (int k = j + 1; k < len; k++) {
                sums = sci[i] + sci[j] + sci[k];
                total.push_back(hist[0] > hist[1] ? sums + hist[0] : sums + hist[1]);
            }
        }
    }
    cout << *max_element(total.begin(), total.end());
    return 0;
}