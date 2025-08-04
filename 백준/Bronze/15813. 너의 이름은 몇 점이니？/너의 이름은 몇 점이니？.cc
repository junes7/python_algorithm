#include <iostream>
using namespace std;
int main(void) {
    int n, cnt = 0;
    string st;
    cin >> n >> st;
    for (int i = 0; i < n; i++)
        cnt += st[i] - 64;
    cout << cnt;
    return 0;
}