#include <iostream>
using namespace std;
int main(void) {
    int g, p, t, id, gr;
    cin >> g >> p >> t;
    id = g * p;
    gr = g + p * t;
    cout << (id == gr ? 0 : (id < gr ? 1 : 2));
    return 0;
}