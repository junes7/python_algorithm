#include <iostream>
using namespace std;
int main(void) {
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cout << num << (num % 2 == 0 ? " is even" : " is odd") << "\n";
    }
    return 0;
}