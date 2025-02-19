#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int solution(int n, int k, vector<string> &words) {
    int minn, cnt;
    bool can_read;
    if (k < 5) return 0;
    vector<int> candidates;
    vector<char> alpha, ch, basic = {'a', 'n', 't', 'i', 'c'};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < words[i].size(); j++) {
            if (find(basic.begin(), basic.end(), words[i][j]) == basic.end()) {
                if (find(alpha.begin(), alpha.end(), words[i][j]) == alpha.end())
                    alpha.push_back(words[i][j]);
            }
        }
    }
    vector<bool> temp(alpha.size(), true);
    minn = alpha.size() < k - 5 ? alpha.size() : k - 5;
    for (int i = 0; i < alpha.size() - minn; i++)
        temp[i] = false;
    set<char>::iterator iter;
    do {
        ch = basic, cnt = 0;
        for (int i = 0; i < alpha.size(); ++i) {
            if (temp[i]) {
                if (find(ch.begin(), ch.end(), alpha[i]) == ch.end())
                    ch.push_back(alpha[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            can_read = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (find(ch.begin(), ch.end(), words[i][j]) == ch.end()) {
                    can_read = false;
                    break;
                }
            }
            if (can_read)
                cnt += 1;
        }
        candidates.push_back(cnt);
    } while (next_permutation(temp.begin(), temp.end()));
    return candidates.size() > 0 ? *max_element(candidates.begin(), candidates.end()) : 0;
}
int main(void) {
    int n, k;
    cin >> n >> k;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
        cin >> words[i];
    cout << solution(n, k, words);
    return 0;
}