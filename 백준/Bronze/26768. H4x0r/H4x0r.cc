#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st, t;
    map<char, char> repl = {{'a', '4'}, {'e', '3'}, {'i', '1'}, {'o', '0'}, {'s', '5'}};
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        if (repl.find(st[i]) != repl.end()) {
            t += repl[st[i]];
        } else {
            t += st[i];
        }
    }
    cout << t;
    return 0;
}