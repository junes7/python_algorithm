#include <iostream>
using namespace std;
int main(void) {
    int n, k, bullets = 0, save = 0;
    string cmd;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "ammo") {
            bullets += k;
        } else if (cmd == "save") {
            save = bullets;
        } else if (cmd == "shoot") {
            bullets -= 1;
        } else if (cmd == "load") {
            bullets = save;
        }
        cout << bullets << "\n";
    }
    return 0;
}