#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    vector<int> pay(n), rlt(n + m), mlist(n + m);
    for (int i = 0; i < n; i++) {
        cin >> pay[i];
        rlt[i] = pay[i];
    }
    for (int i = n; i < n + m; i++)
        rlt[i] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + m; j++) {
            cin >> mlist[j];
            rlt[i] -= mlist[j];
            rlt[j] += mlist[j];
        }
    }
    for (int i = 0; i < n + m; i++)
        cout << rlt[i] << ' ';
    return 0;
}