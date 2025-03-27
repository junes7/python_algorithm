#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    cin >> st;
    stringstream ss(st);
    while (getline(ss, st, 'x')) {
        if (st.size() >= 3) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}