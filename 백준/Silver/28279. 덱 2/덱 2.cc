#include <deque>
#include <iostream>
using namespace std;

int main(void) {
    int n, cmd, num;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> num;
            dq.push_front(num);
        } else if (cmd == 2) {
            cin >> num;
            dq.push_back(num);
        } else if (cmd == 3) {
            if (dq.size() == 0)
                cout << -1 << "\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (cmd == 4) {
            if (dq.size() == 0)
                cout << -1 << "\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (cmd == 5) {
            cout << dq.size() << "\n";
        } else if (cmd == 6) {
            cout << dq.empty() << "\n";
        } else if (cmd == 7) {
            cout << (dq.size() == 0 ? -1 : dq.front()) << "\n";
        } else {
            cout << (dq.size() == 0 ? -1 : dq.back()) << "\n";
        }
    }
    return 0;
}