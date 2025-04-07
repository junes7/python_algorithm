#include <iostream>
using namespace std;
int main(void) {
    int s1, s2, p1, p2, st, pt;
    cin >> p1 >> s1;
    cin >> s2 >> p2;
    st = s1 + s2;
    pt = p1 + p2;
    if (pt == st)
        cout << (s1 == p2 ? "Penalty" : (s1 > p2 ? "Esteghlal" : "Persepolis"));
    else
        cout << (st > pt ? "Esteghlal" : "Persepolis");
    return 0;
}