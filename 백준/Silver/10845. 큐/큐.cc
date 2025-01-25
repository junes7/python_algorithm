#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, num;
    string t;
    ios_base::sync_with_stdio(false);
    deque<int> dq;
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == "push") {
            cin >> num;
            dq.push_back(num);
        } else if (t == "pop") {
            if (dq.size() == 0) {
                cout << -1 << "\n";
            } else {
                cout << dq.front() << "\n";
                dq.pop_front();
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