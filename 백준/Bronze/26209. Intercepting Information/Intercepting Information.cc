#include <iostream>
using namespace std;
int main(void) {
    int elem;
    char status = 'S';
    for (int i = 0; i < 8; i++) {
        cin >> elem;
        if (elem == 9) {
            status = 'F';
            break;
        }
    }
    cout << status;
    return 0;
}