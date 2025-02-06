#include <iostream>
using namespace std;
int fibo(int n) {
    return n < 1 ? 0 : (n < 2 ? 1 : fibo(n - 1) + fibo(n - 2));
}
int main(void) {
    int n;
    cin >> n;
    cout << fibo(n);
}