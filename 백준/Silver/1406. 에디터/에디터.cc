#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string s, r = "";
    char cmd, ch;
    vector<char> left_stack, right_stack;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        left_stack.push_back(s[i]);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == 'L') {
            if (left_stack.size() > 0) {
                right_stack.push_back(left_stack.back());
                left_stack.pop_back();
            }
        } else if (cmd == 'D') {
            if (right_stack.size() > 0) {
                left_stack.push_back(right_stack.back());
                right_stack.pop_back();
            }
        } else if (cmd == 'B') {
            if (left_stack.size() > 0)
                left_stack.pop_back();
        } else if (cmd == 'P') {
            cin >> ch;
            left_stack.push_back(ch);
        }
    }
    for (int i = 0; i < left_stack.size(); i++)
        r += left_stack[i];
    for (int i = right_stack.size() - 1; i >= 0; i--)
        r += right_stack[i];
    cout << r;
    return 0;
}