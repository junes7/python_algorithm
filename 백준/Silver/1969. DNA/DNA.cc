#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n, m, h_dist = 0;
    char sel_dna;
    string rlt = "";
    cin >> n >> m;
    vector<string> dna_list(n);
    vector<char> dna = {'A', 'C', 'G', 'T'};
    vector<int> cnt;
    for (int i = 0; i < n; i++)
        cin >> dna_list[i];
    for (int j = 0; j < m; j++) {
        cnt = {0, 0, 0, 0};
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < 4; k++) {
                if (dna_list[i][j] == dna[k])
                    cnt[k] += 1;
            }
        }
        sel_dna = dna[find(cnt.begin(), cnt.end(), *max_element(cnt.begin(), cnt.end())) - cnt.begin()];
        rlt += sel_dna;
        for (int i = 0; i < n; i++) {
            if (dna_list[i][j] != sel_dna)
                h_dist += 1;
        }
    }
    cout << rlt << "\n";
    cout << h_dist;
    return 0;
}