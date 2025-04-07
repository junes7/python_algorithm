#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    vector<int> total(2, 0);
    for (int i = 0; i < st.size(); i = i + 2)
        total[st[i] - 65] += st[i + 1] - 48;
    cout << (total[0] > total[1] ? 'A' : 'B');
    return 0;
}