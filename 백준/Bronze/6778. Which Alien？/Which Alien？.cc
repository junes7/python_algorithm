#include <iostream>
using namespace std;
int main(void) {
    int ant, eyes;
    cin >> ant;
    cin >> eyes;
    if (ant >= 3 && eyes <= 4)
        cout << "TroyMartian\n";
    if (ant <= 6 && eyes >= 2)
        cout << "VladSaturnian\n";
    if (ant <= 2 && eyes <= 3)
        cout << "GraemeMercurian\n";
    return 0;
}