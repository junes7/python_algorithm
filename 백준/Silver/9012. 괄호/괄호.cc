#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int n;
    vector<char> stack;
    string t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        stack = {};
        for (int j = 0; j < t.size(); j++) {
            if (t[j] == '(') {
                stack.push_back(t[j]);
            } else if (t[j] == ')') {
                if (stack.size() > 0 && stack[stack.size() - 1] == '(')
                    stack.pop_back();
                else
                    stack.push_back(t[j]);
            }
        }
        cout << (stack.size() == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}