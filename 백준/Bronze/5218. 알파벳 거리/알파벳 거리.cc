#include <iostream>
using namespace std;
int main(void) {
    int t, x, y;
    string w1, w2;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> w1 >> w2;
        cout << "Distances: ";
        for (int j = 0; j < w1.size(); j++) {
            x = w1[j] - 65, y = w2[j] - 65;
            cout << (x <= y ? y - x : (y + 26) - x) << ' ';
        }
        cout << "\n";
    }
    return 0;
}