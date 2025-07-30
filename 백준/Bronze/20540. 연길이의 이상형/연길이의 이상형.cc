#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    vector<char> mbti = {'E', 'I', 'S', 'N', 'T', 'F', 'J', 'P'};
    string st, rlt = "";
    cin >> st;
    for (int i = 0; i < st.size(); i++) {
        t = find(mbti.begin(), mbti.end(), st[i]) - mbti.begin();
        mbti.erase(mbti.begin() + t);
    }
    for (int i = 0; i < 4; i++)
        rlt += mbti[i];
    cout << rlt;
    return 0;
}