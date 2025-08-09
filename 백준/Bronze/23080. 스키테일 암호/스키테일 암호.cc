#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n >> st;
    for (int i = 0; i < st.size(); i += n)
        cout << st[i];
    return 0;
}