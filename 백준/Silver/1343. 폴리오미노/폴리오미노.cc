#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<string> find_st = {"XXXX", "XX"}, chg = {"AAAA", "BB"};
    string st;
    cin >> st;
    while (st.find(find_st[0]) != string::npos)
        st.replace(st.find(find_st[0]), find_st[0].length(), chg[0]);
    while (st.find(find_st[1]) != string::npos)
        st.replace(st.find(find_st[1]), find_st[1].length(), chg[1]);
    cout << (st.find("X") != string::npos ? "-1" : st);
    return 0;
}