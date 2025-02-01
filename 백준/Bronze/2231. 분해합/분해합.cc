#include <iostream>
using namespace std;
int main(void) {
    int n, num = 0, t;
    string s;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        t = i, num = i;
        s = to_string(i);
        for (int i = 0; i < s.size(); i++)
            t += s[i] - 48;
        if (t == n)
            break;
    }
    cout << (num == n ? 0 : num);
    return 0;
}