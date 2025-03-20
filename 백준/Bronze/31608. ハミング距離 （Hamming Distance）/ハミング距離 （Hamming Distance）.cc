#include <iostream>
using namespace std;
int main(void) {
    int N, cnt = 0;
    string S, T;
    cin >> N;
    cin >> S;
    cin >> T;
    for (int i = 0; i < N; i++) {
        if (S[i] != T[i])
            cnt += 1;
    }
    cout << cnt;
    return 0;
}