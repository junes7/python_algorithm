#include <iostream>
using namespace std;
int main(void) {
    int cnt = 0;
    string st;
    while (getline(cin, st)) {
        cnt += 1;
    }
    cout << cnt;
    return 0;
}