#include <cctype>
#include <iostream>
using namespace std;

int main(void) {
    string t;
    int n, m = 1;
    long long s = 0;
    cin >> t >> n;
    for (int i = t.size() - 1; i >= 0; i--) {
        if (isalpha(t[i]))
            s += (t[i] - 65 + 10) * m;
        else
            s += (t[i] - 48) * m;
        m *= n;
    }
    cout << s;
    return 0;
}