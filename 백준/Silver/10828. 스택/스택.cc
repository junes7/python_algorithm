#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int n, num;
    string t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> dq;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == "push") {
            cin >> num;
            dq.push_back(num);
        } else if (t == "pop") {
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
        } else if (t == "top") {
            cout << (dq.size() == 0 ? -1 : dq.back()) << "\n";
        }
    }
    return 0;
}