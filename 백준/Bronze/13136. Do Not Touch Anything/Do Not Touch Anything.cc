#include <iostream>
using namespace std;
int main(void) {
    int R, C, N;
    long long s;
    cin >> R >> C >> N;
    s = R / N + (R % N == 0 ? 0 : 1);
    s *= C / N + (C % N == 0 ? 0 : 1);
    cout << s;
    return 0;
}