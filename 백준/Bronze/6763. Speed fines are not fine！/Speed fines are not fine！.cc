#include <iostream>
using namespace std;
int main(void) {
    int l, r, fine;
    cin >> l;
    cin >> r;
    fine = r - l;
    if (1 <= fine && fine <= 20)
        fine = 100;
    else if (21 <= fine && fine <= 30)
        fine = 270;
    else if (31 <= fine)
        fine = 500;
    if (fine <= 0)
        cout << "Congratulations, you are within the speed limit!";
    else
        cout << "You are speeding and your fine is $" << fine << ".";
    return 0;
}