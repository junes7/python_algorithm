#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int n, x, y, elem, accu = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        pq.push(elem);
    }
    while (pq.size() > 1) {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        accu += x + y;
        pq.push(x + y);
    }
    cout << accu;
    return 0;
}