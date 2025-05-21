#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int res, n;
    char op;
    cin >> res;
    while (true) {
        cin >> op;
        if (op == '=') break;
        cin >> n;
        if (op == '+')
            res += n;
        else if (op == '-')
            res -= n;
        else if (op == '*')
            res *= n;
        else
            res /= n;
    }
    cout << res;
    return 0;
}