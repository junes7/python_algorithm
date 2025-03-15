#include <iostream>
using namespace std;
int main(void) {
    int M, K;
    cin >> M >> K;
    cout << (M % K == 0 ? "Yes" : "No");
    return 0;
}