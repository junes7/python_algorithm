#include <iostream>
using namespace std;
int main(void) {
    int n;
    string a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a.size(); j++) {
            a[j] = a[j] == '0' ? '1' : '0';
        }
    }
    cout << (a == b ? "Deletion succeeded" : "Deletion failed");
    return 0;
}