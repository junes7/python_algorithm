#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        for (int j = 0; j < st.size(); j++)
            st[j] = (st[j] - 64) % 26 + 65;
        cout << "String #" << i + 1 << "\n";
        cout << st << "\n\n";
    }
    return 0;
}