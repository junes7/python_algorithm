#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, len, cnt = 0;
    string st;
    cin >> n;
    vector<char> stack;
    for (int i = 0; i < n; i++) {
        cin >> st;
        len = st.size();
        stack = {};
        for (int j = 0; j < len; j++) {
            if (stack.size() && stack[stack.size() - 1] == st[j])
                stack.pop_back();
            else
                stack.push_back(st[j]);
        }
        if (!stack.size())
            cnt += 1;
    }
    cout << cnt;
    return 0;
}