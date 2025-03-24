#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int T, N, s = 0;
    cin >> T;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        s += arr[i];
    }
    cout << (s >= T ? "Padaeng_i Happy" : "Padaeng_i Cry");
    return 0;
}