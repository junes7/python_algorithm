#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
    long long n, num;
    bool flag;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        flag = false;
        cin >> num;
        if (num < 2) {
            cout << 2 << endl;
        } else {
            while (1) {
                if (flag) {
                    cout << num << endl;
                    break;
                }
                flag = true;
                for (long long j = 2; j < (long long)sqrt(num) + 1; j++) {
                    if (num % j == 0) {
                        flag = false;
                        num += 1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}