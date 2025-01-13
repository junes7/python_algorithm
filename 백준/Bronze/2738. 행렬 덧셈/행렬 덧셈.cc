#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(void) {
    int n, m, elem;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<vector<vector<int>>> mat;
    vector<vector<int>> med;
    vector<int> temp;
    string t;
    getline(cin, t);
    for (int i = 0; i < 2; i++) {
        med = {};
        for (int j = 0; j < n; j++) {
            temp = {};
            getline(cin, t);
            stringstream ss(t);
            while (ss >> elem) {
                temp.push_back(elem);
            }
            med.push_back(temp);
        }
        mat.push_back(med);
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < m; k++) {
            mat[0][j][k] += mat[1][j][k];
            cout << mat[0][j][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}