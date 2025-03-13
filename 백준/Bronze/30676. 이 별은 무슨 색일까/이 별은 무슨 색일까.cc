#include <iostream>
using namespace std;
int main(void) {
    int n;
    scanf("%d", &n);
    string r;
    if (n >= 620)
        r = "Red";
    else if (n >= 590)
        r = "Orange";
    else if (n >= 570)
        r = "Yellow";
    else if (n >= 495)
        r = "Green";
    else if (n >= 450)
        r = "Blue";
    else if (n >= 425)
        r = "Indigo";
    else if (n >= 380)
        r = "Violet";
    cout << r;
    return 0;
}