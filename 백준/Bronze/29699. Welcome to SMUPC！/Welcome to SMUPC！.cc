#include <iostream>
using namespace std;
int main(void) {
    int n;
    string st = "WelcomeToSMUPC";
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << st[--n % 14];
    return 0;
}