#include <iostream>
using namespace std;
int main(void) {
    string st, temp;
    getline(cin, st);
    temp = st.substr(1, st.size() - 2);
    if (st[0] == '"' && st[st.size() - 1] == '"' && temp.size() > 0)
        cout << temp;
    else
        cout << "CE";
    return 0;
}