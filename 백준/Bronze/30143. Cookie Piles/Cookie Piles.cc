#include <iostream>
using namespace std;
int main(void) {
    int T, N, A, D, s;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> A >> D;
        s = 0;
        for (int j = 0; j < N; j++)
            s += A + D * j;
        cout << s << "\n";
    }
    return 0;
}