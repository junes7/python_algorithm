#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st, t;
    double total = 0;
    int idx = 0;
    vector<double> arr;
    vector<string> grd = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
    vector<double> grd_num = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
    cin >> st;
    for (int i = 0; i < st.size() - 1; i++) {
        t = "";
        if (st[i] == '+') continue;
        t = st[i];
        if (st[i + 1] == '+')
            t += "+";
        for (int j = 0; j < 9; j++) {
            if (grd[j] == t) {
                arr.push_back(grd_num[j]);
                break;
            }
        }
    }
    if (st[st.size() - 1] != '+') {
        t = st[st.size() - 1];
        for (int j = 0; j < 9; j++) {
            if (grd[j] == t) {
                arr.push_back(grd_num[j]);
                break;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        total += arr[i];
    }
    cout << fixed;
    cout.precision(4);
    cout << total / arr.size();
    return 0;
}