#include <iostream>
using namespace std;
int main(void) {
    string n;
    bool flag;
    cin >> n;
    if (n == "12345678910")
        cout << 10;
    else {
        flag = true;
        for (int i = 0; i < n.size(); i++) {
            if (i + 1 != n[i] - 48) {
                flag = false;
                break;
            }
        }
        cout << (flag ? n[n.size() - 1] - 48 : -1);
    }
    return 0;
}