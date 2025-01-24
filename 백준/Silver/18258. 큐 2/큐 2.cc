#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, num;
    string cmd;
    deque<int> dq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> num;
            dq.push_back(num);
        } else if (cmd == "front") {
            cout << (dq.size() == 0 ? -1 : dq.front()) << "\n";
        } else if (cmd == "back") {
            cout << (dq.size() == 0 ? -1 : dq.back()) << "\n";
        } else if (cmd == "size") {
            cout << dq.size() << "\n";
        } else if (cmd == "empty") {
            cout << dq.empty() << "\n";
        } else if (cmd == "pop") {
            if (dq.size() == 0)
                cout << -1 << "\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
    }
    return 0;
}