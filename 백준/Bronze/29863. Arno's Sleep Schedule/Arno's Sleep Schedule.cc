#include <iostream>
using namespace std;
int main(void) {
    int st, end;
    cin >> st;
    cin >> end;
    cout << (20 <= st && st <= 23 ? end - (st - 24) : end - st);
    return 0;
}