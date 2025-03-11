#include <iostream>
using namespace std;
int main(void) {
    double weight, height, bmi;
    cin >> weight;
    cin >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
        cout << "Underweight";
    else if (18.5 <= bmi && bmi <= 25)
        cout << "Normal weight";
    else
        cout << "Overweight";
    return 0;
}