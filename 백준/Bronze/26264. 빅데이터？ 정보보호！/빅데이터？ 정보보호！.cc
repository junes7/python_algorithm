#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    vector<int> cnt(2, 0);
    string st;
    cin >> n >> st;
    for (int i = 0; i < st.size() - 7; i++) {
        if (st.substr(i, 8) == "security") {
            cnt[0] += 1;
        }
    }
    for (int i = 0; i < st.size() - 6; i++) {
        if (st.substr(i, 7) == "bigdata") {
            cnt[1] += 1;
        }
    }
    cout << (cnt[0] == cnt[1] ? "bigdata? security!" : (cnt[0] > cnt[1] ? "security!" : "bigdata?")) << "\n";
    return 0;
}