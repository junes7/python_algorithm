#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int maxn = 0;
    string t;
    vector<string> st;
    for (int i = 0; i < 5; i++) {
        getline(cin, t);
        if (maxn < t.size()) {
            maxn = t.size();
        }
        st.push_back(t);
    }
    t = "";
    for (int i = 0; i < maxn; i++) {
        for (int j = 0; j < 5; j++) {
            if (st[j][i] != NULL)
                t += st[j][i];
        }
    }
    cout << t << endl;
    return 0;
}