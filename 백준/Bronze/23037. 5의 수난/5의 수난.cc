#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
    string n;
    int rlt = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
        rlt += pow(n[i] - 48, 5);
    cout << rlt;
    return 0;
}