#include <deque>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
    int n, num;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    string t;
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == "push_front") {
            cin >> num;
            dq.push_front(num);
        } else if (t == "push_back") {
            cin >> num;
            dq.push_back(num);
        } else if (t == "pop_front") {
            if (dq.size() == 0)
                cout << -1 << "\n";
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if (t == "pop_back") {
            if (dq.size() == 0)
                cout << -1 << "\n";
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if (t == "size") {
            cout << dq.size() << "\n";
        } else if (t == "empty") {
            cout << (dq.size() == 0 ? 1 : 0) << "\n";
        } else if (t == "front") {
            cout << (dq.size() == 0 ? -1 : dq.front()) << "\n";
        } else if (t == "back") {
            cout << (dq.size() == 0 ? -1 : dq.back()) << "\n";
        }
    }
    return 0;
}