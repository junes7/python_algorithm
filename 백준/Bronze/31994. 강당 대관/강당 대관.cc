#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string sbj, r;
    int num, maxn = 0;
    for (int i = 0; i < 7; i++) {
        cin >> sbj >> num;
        if (maxn < num) {
            maxn = num;
            r = sbj;
        }
    }
    cout << r;
    return 0;
}