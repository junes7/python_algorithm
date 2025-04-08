#include <iostream>
using namespace std;
int main(void) {
    int n, condi, iter;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> condi >> iter;
        cout << (condi <= 2 && iter <= 1 || condi <= 1 && iter <= 2 ? "Yes" : "No") << "\n";
    }
    return 0;
}