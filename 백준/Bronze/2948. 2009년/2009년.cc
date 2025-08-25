#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int d, m, total = 0;
    cin >> d >> m;
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> weekdays = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    for (int i = 0; i < m - 1; i++)
        total += days[i];
    total += d - 1;
    cout << weekdays[total % 7];
    return 0;
}