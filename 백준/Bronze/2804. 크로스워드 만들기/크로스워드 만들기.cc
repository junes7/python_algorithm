#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int l1, l2, idx[2];
    string wr1, wr2;
    cin >> wr1 >> wr2;
    l1 = wr1.size(), l2 = wr2.size();
    for (int i = 0; i < l1; i++) {
        if (wr2.find(wr1[i]) != string::npos) {
            idx[0] = i;
            idx[1] = wr2.find(wr1[i]);
            break;
        }
    }
    vector<vector<char>> rlt(l2, vector<char>(l1, '.'));
    for (int i = 0; i < l2; i++)
        rlt[i][idx[0]] = wr2[i];
    for (int i = 0; i < l1; i++)
        rlt[idx[1]][i] = wr1[i];
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < l1; j++)
            cout << rlt[i][j];
        cout << "\n";
    }
    return 0;
}