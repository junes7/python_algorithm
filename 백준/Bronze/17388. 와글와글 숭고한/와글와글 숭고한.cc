#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int elem, idx = 0, minn = 100, s = 0;
    vector<string> univ = {"Soongsil", "Korea", "Hanyang"};
    for (int i = 0; i < 3; i++) {
        cin >> elem;
        s += elem;
        if (minn > elem) {
            minn = elem;
            idx = i;
        }
    }
    cout << (s >= 100 ? "OK" : univ[idx]);
    return 0;
}