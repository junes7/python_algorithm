#include <iostream>
using namespace std;

int main(void) {
    int t, r;
    string ch;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> r >> ch;
        for (int j = 0; j < ch.size(); j++) {
            for (int k = 0; k < r; k++) {
                cout << ch[j];
            }
        }
        cout << endl;
    }
    return 0;
}