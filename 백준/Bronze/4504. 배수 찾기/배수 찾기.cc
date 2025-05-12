#include <iostream>
using namespace std;
int main(void) {
    int n, num;
    cin >> n;
    while (true) {
        cin >> num;
        if (num == 0) break;
        cout << num << " is " << (num % n == 0 ? "" : "NOT ") << "a multiple of " << n << ".\n";
    }
    return 0;
}