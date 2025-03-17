#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string st;
    while (getline(cin, st)) {
        if (st == "END") break;
        reverse(st.begin(), st.end());
        cout << st << "\n";
    }
    return 0;
}