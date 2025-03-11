#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int cnt = 0;
    string st;
    cin >> st;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < st.size(); i++) {
        for (int j = 0; j < 5; j++) {
            if (st[i] == vowels[j]) {
                cnt += 1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}