#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n, s = 0;
    cin >> n;
    string st;
    map<string, int> pepper = {{"Poblano", 1500}, {"Mirasol", 6000}, {"Serrano", 15500}, {"Cayenne", 40000}, {"Thai", 75000}, {"Habanero", 125000}};
    for (int i = 0; i < n; i++) {
        cin >> st;
        s += pepper[st];
    }
    cout << s;
    return 0;
}