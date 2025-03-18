#include <iostream>
using namespace std;
int main(void) {
    int A, B;
    string st;
    cin >> A;
    cin >> B;
    st = to_string(A + B);
    cout << st.size();
    return 0;
}