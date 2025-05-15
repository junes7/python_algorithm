#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, elem;
    vector<int> tech(3);
    for (int i = 0; i < 3; i++)
        cin >> tech[i];
    cin >> t;
    vector<int> s(t, 0);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cin >> elem;
                s[i] += tech[k] * elem;
            }
        }
    }
    cout << *max_element(s.begin(), s.end());
    return 0;
}