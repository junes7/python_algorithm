#include <iostream>
using namespace std;

int main(void) {
    int n;
    string t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        cout << t[0] << t[t.size() - 1] << endl;
    }
    return 0;
}