#include <iostream>
using namespace std;
int main(void) {
    int t, n, max_p, p;
    string max_name, name;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        max_p = 0, max_name = "";
        for (int j = 0; j < n; j++) {
            cin >> p >> name;
            if (max_p < p) {
                max_p = p;
                max_name = name;
            }
        }
        cout << max_name << "\n";
    }
    return 0;
}