#include <iostream>
using namespace std;
int main(void) {
    int n, num;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        st = "";
        if (num / 5 > 0) {
            for (int j = 0; j < num / 5; j++) {
                st += "++++ ";
            }
        }
        if (num % 5 > 0) {
            for (int j = 0; j < num % 5; j++) {
                st += "|";
            }
        }
        cout << st << "\n";
    }
    return 0;
}