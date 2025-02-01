#include <iostream>
using namespace std;
int main(void) {
    int n, num = 666;
    string s;
    cin >> n;
    while (n - 1) {
        num += 1;
        s = to_string(num);
        if (s.find("666") != string::npos)
            n -= 1;
    }
    cout << num;
    return 0;
}