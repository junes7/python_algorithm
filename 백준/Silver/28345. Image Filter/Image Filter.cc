#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int t, r, c, A, B, C, minn;
    cin >> t;
    vector<int> temp, tem;
    vector<vector<int>> rlt, arr;
    for (int i = 0; i < t; i++) {
        cin >> r >> c;
        arr = {}, rlt = {};
        for (int j = 0; j < r; j++) {
            tem = {};
            for (int k = 0; k < c; k++) {
                cin >> minn;
                tem.push_back(minn);
            }
            arr.push_back(tem);
        }
        for (int j = 0; j < r; j++) {
            tem = {};
            for (int k = 0; k < c; k++) {
                A = 0, B = 0, C = 0, minn = pow(2, 16);
                if (j == 0 && k > 0) {
                    A = arr[j][k - 1];
                } else if (j > 0 && k == 0) {
                    B = arr[j - 1][k];
                } else if (j > 0 && k > 0) {
                    A = arr[j][k - 1];
                    B = arr[j - 1][k];
                    C = arr[j - 1][k - 1];
                }
                temp = {arr[j][k] - 0, arr[j][k] - A, arr[j][k] - B, arr[j][k] - (A + B) / 2, arr[j][k] - (A + B - C)};
                for (int l = 0; l < 5; l++) {
                    if (minn > abs(temp[l]))
                        minn = abs(temp[l]);
                }
                for (int l = 0; l < 5; l++) {
                    if (minn == abs(temp[l])) {
                        tem.push_back(l);
                        tem.push_back(temp[l]);
                        break;
                    }
                }
            }
            rlt.push_back(tem);
        }
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < rlt[j].size(); k++) {
                cout << rlt[j][k] << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}