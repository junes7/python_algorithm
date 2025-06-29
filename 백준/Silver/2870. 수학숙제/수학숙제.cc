#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
bool cmp(string &a, string &b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
int main(void) {
    int n, idx;
    vector<string> temp, rlt;
    string st, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        temp = {}, num = "";
        for (int j = 0; j < st.size(); j++) {
            if (isdigit(st[j])) {
                num += st[j];
            } else {
                if (!num.empty()) {
                    idx = -1;
                    for (int k = 0; k < num.size(); k++) {
                        if (num[k] != '0') {
                            idx = k;
                            break;
                        }
                    }
                    num = num.size() > 0 && idx == -1 && num[num.size() - 1] == '0' ? "0" : num.substr(idx, num.size() - idx);
                    temp.push_back(num);
                }
                num = "";
            }
        }
        if (!num.empty()) {
            idx = -1;
            for (int k = 0; k < num.size(); k++) {
                if (num[k] != '0') {
                    idx = k;
                    break;
                }
            }
            num = num.size() > 0 && idx == -1 && num[num.size() - 1] == '0' ? "0" : num.substr(idx, num.size() - idx);
            temp.push_back(num);
        }
        for (int j = 0; j < temp.size(); j++)
            rlt.push_back(temp[j]);
    }
    sort(rlt.begin(), rlt.end(), cmp);
    for (int i = 0; i < rlt.size(); i++)
        cout << rlt[i] << "\n";
    return 0;
}