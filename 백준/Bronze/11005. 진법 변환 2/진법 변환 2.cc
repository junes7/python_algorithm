#include <iostream>
#include <string>
using namespace std;

int main(void) {
    long long s;
    int n;
    string t;
    char ch;
    scanf("%lld %d", &s, &n);
    while (s > 0) {
        if (s % n >= 10)
            t += (s % n + 55);
        else
            t += (s % n) + 48;
        s /= n;
    }
    for (int i = 0; i < t.size() / 2; i++) {
        ch = t[i];
        t[i] = t[t.size() - 1 - i];
        t[t.size() - 1 - i] = ch;
    }
    cout << t;
    return 0;
}