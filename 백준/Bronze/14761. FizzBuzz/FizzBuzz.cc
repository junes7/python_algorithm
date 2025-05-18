#include <iostream>
using namespace std;
int main(void) {
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i < n + 1; i++)
        cout << (i % x == 0 && i % y == 0 ? "FizzBuzz" : (i % x == 0 ? "Fizz" : (i % y == 0 ? "Buzz" : to_string(i)))) << "\n";
    return 0;
}