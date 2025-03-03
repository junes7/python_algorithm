#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string s;
    cin >> s;
    vector<vector<string>> arr(3, vector<string>(3, ":fan:"));
    arr[1][1] = ":" + s + ":";
    for (int i = 0; i < 3; i++) {
        s = "";
        for (int j = 0; j < 3; j++)
            s += arr[i][j];
        cout << s << "\n";
    }
    return 0;
}