#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string st1, st2;
    cin >> n >> st1 >> st2;
    for (int i = 0; i < n; i++) {
        if (st1[i] == st2[i])
            cnt += 1;
    }
    cout << cnt;
    return 0;
}