#include <iostream>
#include <vector>
using namespace std;
void add_dna(vector<char> &chk_dna, vector<int> &cnt_dna, char d) {
    for (int i = 0; i < 4; i++) {
        if (d == chk_dna[i])
            cnt_dna[i] += 1;
    }
}
bool check_dna(vector<int> &cnt_dna, vector<int> &max_dna) {
    for (int i = 0; i < 4; i++) {
        if (cnt_dna[i] < max_dna[i])
            return false;
    }
    return true;
}
void del_dna(vector<char> &chk_dna, vector<int> &cnt_dna, char d) {
    for (int i = 0; i < 4; i++) {
        if (d == chk_dna[i])
            cnt_dna[i] -= 1;
    }
}
int main(void) {
    int s, p, cnt;
    string dna;
    vector<char> chk_dna = {'A', 'C', 'G', 'T'};
    vector<int> max_dna, cnt_dna = {0, 0, 0, 0};
    cin >> s >> p;
    cin >> dna;
    for (int i = 0; i < 4; i++) {
        cin >> cnt;
        max_dna.push_back(cnt);
    }
    for (int i = 0; i < p; i++) {
        add_dna(chk_dna, cnt_dna, dna[i]);
        cnt = check_dna(cnt_dna, max_dna) ? 1 : 0;
    }
    for (int i = p; i < s; i++) {
        del_dna(chk_dna, cnt_dna, dna[i - p]);
        add_dna(chk_dna, cnt_dna, dna[i]);
        if (check_dna(cnt_dna, max_dna))
            cnt += 1;
    }
    cout << cnt;
    return 0;
}