#include <iostream>
using namespace std;
int main(void) {
    int s, ma, f, mb;
    cin >> s;
    cin >> ma >> f >> mb;
    cout << (s <= ma + f + mb || s <= 240 ? "high speed rail" : "flight");
    return 0;
}