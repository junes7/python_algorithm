#include <deque>
#include <iostream>
using namespace std;
int main(void) {
    int len;
    string st, rlt = "";
    bool check = false;
    deque<char> stack;
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == '<') {
            check = true;
            len = stack.size();
            for (int j = 0; j < len; j++) {
                rlt += stack.back();
                stack.pop_back();
            }
        }
        stack.push_back(st[i]);
        if (st[i] == '>') {
            check = false;
            len = stack.size();
            for (int j = 0; j < len; j++) {
                rlt += stack.front();
                stack.pop_front();
            }
        }
        if (st[i] == ' ' && check == false) {
            stack.pop_back();
            len = stack.size();
            for (int j = 0; j < len; j++) {
                rlt += stack.back();
                stack.pop_back();
            }
            rlt += st[i];
        }
    }
    if (stack.size()) {
        len = stack.size();
        for (int i = 0; i < len; i++) {
            rlt += stack.back();
            stack.pop_back();
        }
    }
    cout << rlt;
    return 0;
}