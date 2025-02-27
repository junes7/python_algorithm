#include <iostream>
using namespace std;
int main(void) {
    int num, cnt = 0;
    cin >> num;
    while (num >= 0) {
        if (num % 5 == 0) {
            cnt += num / 5;
            cout << cnt;
            break;
        }
        cnt += 1;
        num -= 3;
    }
    if (num < 0)
        cout << -1;
    return 0;
}