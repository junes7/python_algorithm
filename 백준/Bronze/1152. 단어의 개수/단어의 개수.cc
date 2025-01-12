#include <iostream>
#include <sstream>
using namespace std;

int main(void) {
    string t;
    int cnt = 0;
    getline(cin, t);
    stringstream ss(t);
    while (ss >> t) {
        cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}