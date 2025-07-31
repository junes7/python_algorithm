#include <iostream>
using namespace std;
int main(void) {
    string st;
    int n1, n2, flag, i = 1;
    while (1) {
        cin >> n1 >> st >> n2;
        if (st == "E") break;
        if (st == ">")
            flag = n1 > n2;
        else if (st == ">=")
            flag = n1 >= n2;
        else if (st == "<")
            flag = n1 < n2;
        else if (st == "<=")
            flag = n1 <= n2;
        else if (st == "==")
            flag = n1 == n2;
        else
            flag = n1 != n2;
        cout << "Case " << i++ << ": " << (flag ? "true" : "false") << "\n";
    }
    return 0;
}