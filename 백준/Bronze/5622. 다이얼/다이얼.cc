#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<string> t = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    string ch;
    int len, s = 0, d = 1;
    cin >> ch;
    len = ch.size();
    for (int i = 0; i < ch.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if (t[j].find(ch[i]) != string::npos) {
                s += j + d;
            }
        }
    }
    cout << s << endl;
    return 0;
}