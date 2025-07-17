#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    sort(st.begin(), st.end(), greater<char>());
    cout << st;
    return 0;
}