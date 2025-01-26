#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for (int i = 0; i < t.size(); i++)
        t[i] = isupper(t[i]) ? tolower(t[i]) : toupper(t[i]);
    cout << t;
    return 0;
}