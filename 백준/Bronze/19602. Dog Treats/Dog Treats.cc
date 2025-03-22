#include <iostream>
using namespace std;
int main(void) {
    int S, M, L;
    cin >> S;
    cin >> M;
    cin >> L;
    cout << (1 * S + 2 * M + 3 * L >= 10 ? "happy" : "sad");
    return 0;
}