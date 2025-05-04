#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt = 0;
    string st;
    cin >> st;
    for (int i = 0; i < st.size() - 1; i++) {
        if (st[i] != st[i + 1])
            cnt += 1;
    }
    cout << (cnt + 1) / 2;
    return 0;
}