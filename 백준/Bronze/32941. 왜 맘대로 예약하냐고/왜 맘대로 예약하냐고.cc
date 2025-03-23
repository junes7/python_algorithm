#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int T, X, N, K, elem, cnt = 0;
    cin >> T >> X;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> K;
        for (int j = 0; j < K; j++) {
            cin >> elem;
            if (elem == X) {
                cnt += 1;
            }
        }
    }
    cout << (cnt == N ? "YES" : "NO");
    return 0;
}