#include <iostream>
using namespace std;
int main(void) {
    int n, num, even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    cout << (even > odd ? "Happy" : "Sad");
    return 0;
}