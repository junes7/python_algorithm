#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st = "WelcomeToSMUPC";
    cin >> n;
    cout << st[--n % st.size()];
    return 0;
}