#include <iostream>
using namespace std;
int main(void) {
    int n;
    long long lt, wt, le, we;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> lt >> wt >> le >> we;
        cout << (lt * wt == le * we ? "Tie" : (lt * wt < le * we ? "Eurecom" : "TelecomParisTech")) << "\n";
    }
    return 0;
}