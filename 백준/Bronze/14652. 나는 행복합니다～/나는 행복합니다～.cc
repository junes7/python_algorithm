#include <iostream>
using namespace std;
int main(void) {
    int N, M, K, x, y;
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (M * i + j == K) {
                x = i, y = j;
            }
        }
    }
    cout << x << ' ' << y;
    return 0;
}