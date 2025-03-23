#include <iostream>
using namespace std;
int main(void) {
    string st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st;
        cout << st.size() << "\n";
    }
    return 0;
}