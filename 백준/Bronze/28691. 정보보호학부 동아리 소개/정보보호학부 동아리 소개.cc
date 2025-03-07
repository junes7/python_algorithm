#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    map<string, string> club = {{"M", "MatKor"}, {"W", "WiCys"}, {"C", "CyKor"}, {"A", "AlKor"}, {"$", "$clear"}};
    cout << club[st];
    return 0;
}