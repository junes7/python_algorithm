#include <iostream>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    int s;
    string t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    vector<string> st;
    vector<int> num, p;
    stringstream ss(t);
    while (getline(ss, t, '-'))
        st.push_back(t);
    for (int i = 0; i < st.size(); i++) {
        if (st[i].find('+') == string::npos) {
            num.push_back(stoi(st[i]));
        } else {
            stringstream ss(st[i]);
            p = {};
            while (getline(ss, t, '+')) {
                p.push_back(stoi(t));
            }
            num.push_back(accumulate(p.begin(), p.end(), 0));
        }
    }
    s = num[0];
    for (int i = 1; i < num.size(); i++)
        s -= num[i];
    cout << s;
    return 0;
}