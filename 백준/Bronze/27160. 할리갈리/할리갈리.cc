#include <iostream>
#include <map>
using namespace std;
int main(void) {
    map<string, int> cards = {{"STRAWBERRY", 0}, {"BANANA", 0}, {"LIME", 0}, {"PLUM", 0}};
    int t, n;
    string st;
    bool flag = false;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> st >> n;
        cards[st] += n;
    }
    map<string, int>::iterator iter;
    for (iter = cards.begin(); iter != cards.end(); iter++) {
        if (iter->second == 5) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}