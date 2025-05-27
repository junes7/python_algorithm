#include <iostream>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    string st;
    getline(cin, st);
    for (int i = 0; i < n; i++) {
        getline(cin, st);
        if (islower(st[0]))
            st[0] = toupper(st[0]);
        cout << st << "\n";
    }
    return 0;
}