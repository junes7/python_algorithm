#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        for (int j = 0; j < st.size(); j++)
            st[j] = tolower(st[j]);
        cout << st << "\n";
    }
    return 0;
}