#include <deque>
#include <iostream>
#include <vector>
using namespace std;
int bfs(int st, int end) {
    int a, b, cnt;
    deque<int> q;
    q.push_back(st);
    q.push_back(end);
    q.push_back(0);
    while (!q.empty()) {
        a = q.front();
        q.pop_front();
        b = q.front();
        q.pop_front();
        cnt = q.front();
        q.pop_front();
        if (a == b) return cnt;
        if (a * 2 <= b + 3) {
            q.push_back(a * 2);
            q.push_back(b + 3);
            q.push_back(cnt + 1);
        }
        if (a + 1 <= b) {
            q.push_back(a + 1);
            q.push_back(b);
            q.push_back(cnt + 1);
        }
    }
}
int main(void) {
    int c, st, end;
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> st >> end;
        cout << bfs(st, end) << "\n";
    }
    return 0;
}