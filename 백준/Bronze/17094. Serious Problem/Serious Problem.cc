#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    int n, cnt2, cnte;
    string st;
    cin >> n;
    cin >> st;
    cnt2 = count(st.begin(), st.end(), '2');
    cnte = count(st.begin(), st.end(), 'e');
    cout << (cnt2 == cnte ? "yee" : (cnt2 > cnte ? "2" : "e")) << "\n";
    return 0;
}