#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    double rlt, t;
    string st;
    cin >> n;
    cin >> st;
    vector<int> num(n);
    vector<double> stack;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < st.size(); i++) {
        if (isalpha(st[i])) {
            stack.push_back(num[st[i] - 65]);
        } else {
            t = stack.back();
            stack.pop_back();
            rlt = stack.back();
            stack.pop_back();
            if (st[i] == '+') {
                rlt += t;
            } else if (st[i] == '-') {
                rlt -= t;
            } else if (st[i] == '*') {
                rlt *= t;
            } else {
                rlt /= t;
            }
            stack.push_back(rlt);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << rlt;
    return 0;
}