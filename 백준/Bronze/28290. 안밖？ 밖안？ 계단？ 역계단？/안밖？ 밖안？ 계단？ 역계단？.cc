#include <iostream>
using namespace std;
int main(void) {
    string st;
    cin >> st;
    if (st == "fdsajkl;" or st == "jkl;fdsa")
        cout << "in-out";
    else if (st == "asdf;lkj" or st == ";lkjasdf")
        cout << "out-in";
    else if (st == "asdfjkl;")
        cout << "stairs";
    else if (st == ";lkjfdsa")
        cout << "reverse";
    else
        cout << "molu";
    return 0;
}