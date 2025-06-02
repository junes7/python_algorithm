#include <cmath>
#include <iostream>
using namespace std;
int hpy(int n) {
    int s = 0;
    while (n > 0) {
        s += pow(n % 10, 2);
        n /= 10;
    }
    return s;
}
int main(void) {
    int n;
    cin >> n;
    while (1) {
        n = hpy(n);
        if (n == 4) {
            cout << "UNHAPPY";
            break;
        } else if (n == 1) {
            cout << "HAPPY";
            break;
        }
    }
    return 0;
}