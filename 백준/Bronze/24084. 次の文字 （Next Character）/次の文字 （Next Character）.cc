#include <iostream>
using namespace std;
int main(void) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
        if (s[i + 1] == 'J')
            cout << s[i] << "\n";
    return 0;
}