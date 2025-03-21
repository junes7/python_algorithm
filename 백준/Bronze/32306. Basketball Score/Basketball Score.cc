#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int s1 = 0, s2 = 0;
    vector<int> t1(3), t2(3);
    for (int i = 0; i < 3; i++) {
        cin >> t1[i];
        s1 += t1[i] * (i + 1);
    }
    for (int i = 0; i < 3; i++) {
        cin >> t2[i];
        s2 += t2[i] * (i + 1);
    }
    cout << (s1 == s2 ? 0 : (s1 > s2 ? 1 : 2));
    return 0;
}