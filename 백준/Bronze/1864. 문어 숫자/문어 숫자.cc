#include <cmath>
#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st;
    int rlt;
    map<char, int> dic = {{'-', 0}, {'\\', 1}, {'(', 2}, {'@', 3}, {'?', 4}, {'>', 5}, {'&', 6}, {'%', 7}, {'/', -1}};
    while (1) {
        cin >> st;
        if (st == "#") break;
        rlt = 0;
        for (int i = 0; i < st.size(); i++) {
            rlt += dic[st[i]] * pow(8, st.size() - 1 - i);
        }
        cout << rlt << "\n";
    }
    return 0;
}