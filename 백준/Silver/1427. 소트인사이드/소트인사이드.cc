#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string t;
    cin >> t;
    sort(t.begin(), t.end(), greater<char>());
    cout << t;
    return 0;
}