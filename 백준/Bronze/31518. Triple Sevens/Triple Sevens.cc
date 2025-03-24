#include <iostream>
using namespace std;
int main(void) {
    int n, elem;
    string st;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> elem;
            if (elem == 7) {
                st += to_string(7);
            }
        }
    }
    cout << (st.size() == 3 ? st : "0");
    return 0;
}