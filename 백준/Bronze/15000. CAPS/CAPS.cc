#include <iostream>
using namespace std;
int main(void) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        s[i] = toupper(s[i]);
    cout << s;
    return 0;
}