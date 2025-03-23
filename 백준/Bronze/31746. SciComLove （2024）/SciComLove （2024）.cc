#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string st = "SciComLove";
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << st;
    } else {
        reverse(st.begin(), st.end());
        cout << st;
    }
    return 0;
}