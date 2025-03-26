#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    for (int i = 0; i < n; i++) {
        s += A[i] > B[i] ? 3 : A[i] == B[i] ? 1
                                            : 0;
    }
    cout << s;
    return 0;
}