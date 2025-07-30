#include <iostream>
using namespace std;
int main(void) {
    string st;
    int n, idx;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> idx >> st;
        st.erase(idx - 1, 1);
        cout << st << "\n";
    }
    return 0;
}