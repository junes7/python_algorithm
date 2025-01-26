#include <deque>
#include <iostream>
using namespace std;

int main(void) {
    int n, elem;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    deque<int> queuestack, dq;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        queuestack.push_back(elem);
    }
    for (int i = 0; i < n; i++) {
        cin >> elem;
        if (queuestack[i] == 0)
            dq.push_back(elem);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        dq.push_front(elem);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    return 0;
}