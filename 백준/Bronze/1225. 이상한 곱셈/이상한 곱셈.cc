#include <iostream>
using namespace std;
int main(void) {
    unsigned long long t = 0;
    string a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            t += (a[i] - 48) * (b[j] - 48);
        }
    }
    cout << t;
    return 0;
}