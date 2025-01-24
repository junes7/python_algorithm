#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k, st;
    cin >> n >> k;
    deque<int> dq;
    vector<int> res;
    st = k;
    for (int i = 0; i < n; i++)
        dq.push_back(i + 1);
    while (res.size() < n) {
        res.push_back(dq[st - 1]);
        dq.erase(dq.begin() + st - 1);
        if (dq.size() > 0) {
            st = (st - 1 + k) % dq.size();
            if (st == 0) st = dq.size();
        }
    }
    cout << "<";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << (i == res.size() - 1 ? ">" : ", ");
    return 0;
}