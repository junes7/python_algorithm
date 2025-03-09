#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    vector<int> alpha(26, 0);
    cin >> st;
    for (int i = 0; i < st.size(); i++)
        alpha[st[i] - 97] += 1;
    for (int i = 0; i < 26; i++)
        cout << alpha[i] << ' ';
    return 0;
}