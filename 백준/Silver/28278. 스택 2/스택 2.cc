#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, cmd, elem;
    vector<int> stack;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> elem;
            stack.push_back(elem);
        } else if (cmd == 2) {
            if (stack.size() == 0)
                cout << -1 << "\n";
            else {
                cout << stack[stack.size() - 1] << "\n";
                stack.pop_back();
            }
        } else if (cmd == 3) {
            cout << stack.size() << "\n";
        } else if (cmd == 4) {
            cout << (stack.size() == 0 ? 1 : 0) << "\n";
        } else {
            cout << (stack.size() == 0 ? -1 : stack[stack.size() - 1]) << "\n";
        }
    }
    return 0;
}