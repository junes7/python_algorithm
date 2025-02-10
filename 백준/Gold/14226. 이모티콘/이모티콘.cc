#include <deque>
#include <iostream>
#include <set>
using namespace std;
int min_time_to_make_emoticons(int s) {
    int screen, clipboard, time;
    set<set<int>> visited;
    deque<deque<int>> que;
    visited.insert({1, 0});
    que.push_back({1, 0, 0});
    while (!que.empty()) {
        screen = que.front()[0], clipboard = que.front()[1], time = que.front()[2];
        que.pop_front();
        if (screen == s)
            return time;
        if (visited.find({screen, screen}) == visited.end()) {
            visited.insert({screen, screen});
            que.push_back({screen, screen, time + 1});
        }
        if (visited.find({screen + clipboard, clipboard}) == visited.end()) {
            visited.insert({screen + clipboard, clipboard});
            que.push_back({screen + clipboard, clipboard, time + 1});
        }
        if (visited.find({screen - 1, clipboard}) == visited.end()) {
            visited.insert({screen - 1, clipboard});
            que.push_back({screen - 1, clipboard, time + 1});
        }
    }
}
int main(void) {
    int s;
    cin >> s;
    cout << min_time_to_make_emoticons(s);
    return 0;
}