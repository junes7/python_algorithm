#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int suma = 0, sumb = 0;
    vector<int> a(2), b(2);
    for (int i = 0; i < 2; i++)
        cin >> a[i];
    for (int i = 0; i < 2; i++)
        cin >> b[i];
    suma = a[1] / b[0] + (a[1] % b[0] == 0 ? 0 : 1);
    sumb = b[1] / a[0] + (b[1] % a[0] == 0 ? 0 : 1);
    cout << (suma == sumb ? "DRAW" : (suma > sumb ? "PLAYER A" : "PLAYER B"));
    return 0;
}