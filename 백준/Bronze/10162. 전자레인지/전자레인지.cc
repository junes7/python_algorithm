#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    vector<int> buttons = {300, 60, 10}, cnts;
    for (int i = 0; i < buttons.size(); i++) {
        cnts.push_back(t / buttons[i]);
        t %= buttons[i];
    }
    if (t > 0)
        cout << -1;
    else
        for (int i = 0; i < cnts.size(); i++)
            cout << cnts[i] << ' ';
    return 0;
}