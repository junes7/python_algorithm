#include <deque>
#include <iostream>
using namespace std;

int main(void) {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    deque<int> dq;
    for (int i = n; i > 0; i--)
        dq.push_back(i);
    while (dq.size() > 1) {
        dq.pop_back();
        dq.push_front(dq.back());
        dq.pop_back();
    }
    cout << dq[0];
    return 0;
}