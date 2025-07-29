#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<char> mobis = {'M', 'O', 'B', 'I', 'S'};
    string st;
    bool flag = true;
    cin >> st;
    for (int i = 0; i < 5; i++) {
        if (st.find(mobis[i]) == string::npos) {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}