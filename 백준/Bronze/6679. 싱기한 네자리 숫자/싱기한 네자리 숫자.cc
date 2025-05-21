#include <iostream>
using namespace std;
int num_len(int n, int t) {
    int rem = 0;
    while (n > 0) {
        rem += n % t;
        n /= t;
    }
    return rem;
}
int main(void) {
    for (int i = 1000; i < 10000; i++) {
        if (num_len(i, 10) == num_len(i, 12) && num_len(i, 12) == num_len(i, 16)) {
            cout << i << "\n";
        }
    }
    return 0;
}