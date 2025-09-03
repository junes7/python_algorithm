#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int cnt = 0;
    string love = "SciComLove";

    for (int i = 0; i < 10; i++) {
        if (s[i] != love[i]) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}