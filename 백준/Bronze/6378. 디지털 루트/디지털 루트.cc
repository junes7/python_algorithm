#include <iostream>
using namespace std;
int main(void) {
    string n;
    int tmp;
    while (1) {
        cin >> n;
        if (n == "0") break;
        while (1) {
            tmp = 0;
            for (int i = 0; i < n.size(); i++)
                tmp += n[i] - 48;
            if (tmp < 10) {
                cout << tmp << "\n";
                break;
            }
            n = to_string(tmp);
        }
    }
    return 0;
}