#include <iostream>
#include <sstream>
using namespace std;
int main(void) {
    int n, rlt;
    cin >> n;
    string st;
    for (int i = 0; i < n; i++) {
        cin >> st;
        rlt = 0;
        if (st.find('=') != string::npos) {
            cout << "skipped\n";
        } else {
            stringstream ss(st);
            while (getline(ss, st, '+')) {
                rlt += stoi(st);
            }
            cout << rlt << "\n";
        }
    }
    return 0;
}