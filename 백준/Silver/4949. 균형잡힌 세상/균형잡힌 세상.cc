#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string t;
    vector<char> stack;
    while (1) {
        getline(cin, t);
        if (t.size() == 1)
            break;
        stack = {};
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '(' or t[i] == '[')
                stack.push_back(t[i]);
            else if (t[i] == ')') {
                if (stack.size() > 0 && stack[stack.size() - 1] == '(')
                    stack.pop_back();
                else
                    stack.push_back(t[i]);
            } else if (t[i] == ']') {
                if (stack.size() > 0 && stack[stack.size() - 1] == '[')
                    stack.pop_back();
                else
                    stack.push_back(t[i]);
            }
        }
        cout << (stack.size() == 0 ? "yes" : "no") << "\n";
    }
    return 0;
}