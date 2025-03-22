#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st;
    int n;
    cin >> n;
    cin >> st;
    map<char, char> repl = {{'J', 'O'}, {'O', 'I'}, {'I', 'J'}};
    for (int i = 0; i < n; i++)
        st[i] = repl[st[i]];
    cout << st;
    return 0;
}