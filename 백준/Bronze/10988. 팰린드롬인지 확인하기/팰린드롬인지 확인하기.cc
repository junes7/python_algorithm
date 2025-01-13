#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string t;
    int r = 1;
    cin >> t;
    if (t.size() % 2 == 0)
        for (int i = 0; i < t.size() / 2; i++) {
            if (t[i] != t[t.size() - 1 - i]) {
                r = 0;
                break;
            }
        }
    else {
        for (int i = 0; i < t.size() / 2; i++) {
            if (t[i] != t[t.size() - 1 - i]) {
                r = 0;
                break;
            }
        }
    }
    cout << r << endl;
    return 0;
}