#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string sq1, sq2, r = "";
    cin >> sq1;
    cin >> sq2;
    for (int i = 0; i < sq1.size(); i++)
        r += int(sq1[i]) > int(sq2[i]) ? sq1[i] : sq2[i];
    cout << r;
    return 0;
}