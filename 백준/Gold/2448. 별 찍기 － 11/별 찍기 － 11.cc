#include <iostream>
#include <vector>
using namespace std;
void recursion(vector<vector<char>> &stars, int i, int j, int size) {
    int nsize;
    if (size == 3) {
        stars[i][j] = '*';
        stars[i + 1][j - 1] = stars[i + 1][j + 1] = '*';
        for (int k = -2; k < 3; k++)
            stars[i + 2][j - k] = '*';
    } else {
        nsize = size / 2;
        recursion(stars, i, j, nsize);
        recursion(stars, i + nsize, j - nsize, nsize);
        recursion(stars, i + nsize, j + nsize, nsize);
    }
}
int main(void) {
    int n;
    cin >> n;
    string t;
    vector<vector<char>> stars(n, vector<char>(2 * n, ' '));
    recursion(stars, 0, n - 1, n);
    for (int i = 0; i < stars.size(); i++) {
        t = "";
        for (int j = 0; j < stars[i].size(); j++)
            t += stars[i][j];
        cout << t << "\n";
    }
    return 0;
}