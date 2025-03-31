#include <iostream>
using namespace std;
int main(void) {
    int n, u, l;
    cin >> n >> u >> l;
    if (n >= 1000) {
        if (u >= 8000 or l >= 260)
            cout << "Very Good";
        else
            cout << "Good";
    } else {
        cout << "Bad";
    }
    return 0;
}