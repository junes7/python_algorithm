#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        getline(cin, st);
        if (i > 0) cout << i << ". " + st << "\n";
    }
    return 0;
}