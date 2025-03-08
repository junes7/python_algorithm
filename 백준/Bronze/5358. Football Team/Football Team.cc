#include <iostream>
using namespace std;
int main(void) {
    string st;
    while (getline(cin, st)) {
        for (int j = 0; j < st.size(); j++) {
            if (st[j] == 'i' || st[j] == 'I')
                st[j] = st[j] == 'i' ? 'e' : 'E';
            else if (st[j] == 'e' || st[j] == 'E')
                st[j] = st[j] == 'e' ? 'i' : 'I';
        }
        cout << st << "\n";
    }
    return 0;
}