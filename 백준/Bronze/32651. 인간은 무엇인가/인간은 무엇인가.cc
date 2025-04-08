#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    cout << (n <= 100000 && n % 2024 == 0 ? "Yes" : "No");
    return 0;
}