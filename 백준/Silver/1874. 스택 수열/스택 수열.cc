#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t, n, cnt = 1;
    vector<int> stack;
    vector<char> op;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        while (cnt <= n) {
            stack.push_back(cnt);
            op.push_back('+');
            cnt += 1;
        }
        if (stack.back() == n) {
            stack.pop_back();
            op.push_back('-');
        } else {
            break;
        }
    }
    if (!stack.empty()) {
        cout << "NO";
    } else {
        for (int i = 0; i < op.size(); i++)
            cout << op[i] << "\n";
    }
    return 0;
}