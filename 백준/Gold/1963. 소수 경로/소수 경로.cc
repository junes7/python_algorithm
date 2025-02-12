#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;
bool isprime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < int(pow(n, 0.5)) + 1; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int find_min_steps(int start, int target) {
    int curr, digit, next_num;
    string curr_str, t;
    map<int, int> visited;
    visited.insert({start, 0});
    queue<int> q;
    q.push(start);
    while (!q.empty()) {
        curr = q.front();
        q.pop();
        if (curr == target)
            return visited[curr];
        curr_str = to_string(curr);
        for (int i = 0; i < curr_str.size(); i++) {
            t = curr_str;
            digit = t[i] - 48;
            for (int j = 0; j < 10; j++) {
                if (i == 0 && j == 0)
                    continue;
                if (j == digit)
                    continue;
                t[i] = j + 48;
                next_num = stoi(t);
                if (isprime(next_num) && visited.find(next_num) == visited.end()) {
                    visited[next_num] = visited[curr] + 1;
                    q.push(next_num);
                }
            }
        }
    }
    return -1;
}
int main(void) {
    int t, start, target, r;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> start >> target;
        r = find_min_steps(start, target);
        if (r == -1)
            cout << "Impossible" << "\n";
        else
            cout << r << "\n";
    }
    return 0;
}