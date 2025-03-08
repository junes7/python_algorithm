#include <iostream>
using namespace std;
int main(void) {
    int L, A, B, C, D, lang, math;
    cin >> L;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    lang = A / C + (A % C == 0 ? 0 : 1);
    math = B / D + (B % D == 0 ? 0 : 1);
    cout << L - (lang > math ? lang : math);
    return 0;
}