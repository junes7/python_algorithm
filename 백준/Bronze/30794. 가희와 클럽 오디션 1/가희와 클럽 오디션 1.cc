#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int lv;
    string verd;
    cin >> lv >> verd;
    map<string, int> asmt = {{"miss", 0}, {"bad", 200}, {"cool", 400}, {"great", 600}, {"perfect", 1000}};
    cout << asmt[verd] * lv;
    return 0;
}