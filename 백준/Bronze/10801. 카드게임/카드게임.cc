#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> A(10), B(10);
    int cntA = 0, cntB = 0;
    for (int i = 0; i < 10; i++)
        cin >> A[i];
    for (int i = 0; i < 10; i++)
        cin >> B[i];
    for (int i = 0; i < 10; i++) {
        if (A[i] == B[i])
            continue;
        if (A[i] > B[i])
            cntA += 1;
        else
            cntB += 1;
    }
    cout << (cntA == cntB ? "D" : (cntA > cntB ? "A" : "B"));
    return 0;
}