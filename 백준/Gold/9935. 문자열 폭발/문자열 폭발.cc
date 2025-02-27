#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, bomb;
    bool flag;
    vector<char> stack;
    cin >> st;
    cin >> bomb;
    for (int i = 0; i < st.size(); i++) {
        stack.push_back(st[i]);
        if (stack.size() >= bomb.size()) {
            flag = true;
            for (int j = 0; j < bomb.size(); j++) {
                if (stack[stack.size() - bomb.size() + j] != bomb[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                for (int j = 0; j < bomb.size(); j++) {
                    stack.pop_back();
                }
            }
        }
    }
    if (stack.size() > 0) {
        string r(stack.begin(), stack.end());
        cout << r;
    } else {
        cout << "FRULA";
    }
    return 0;
}