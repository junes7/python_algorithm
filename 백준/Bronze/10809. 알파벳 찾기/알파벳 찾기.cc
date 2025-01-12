#include <iostream>
using namespace std;

int main(void) {
    string t;
    int num[26];
    cin >> t;
    for (int i = 0; i < 26; i++) {
        num[i] = -1;
    }
    for (int i = 0; i < t.size(); i++) {
        if (num[t[i] - 97] == -1)
            num[t[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++) {
        cout << num[i] << ' ';
    }
}