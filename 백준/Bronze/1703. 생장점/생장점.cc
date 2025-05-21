#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    int n, leaves;
    string st;
    vector<int> line;
    while (getline(cin, st)) {
        if (st[0] == '0') break;
        line = {}, leaves = 1;
        stringstream ss(st);
        while (getline(ss, st, ' '))
            line.push_back(stoi(st));
        for (int i = 1; i < line.size(); i = i + 2)
            leaves = leaves * line[i] - line[i + 1];
        cout << leaves << "\n";
    }
    return 0;
}