#include <ctime>
#include <iostream>
using namespace std;
int main(void) {
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    cout << t->tm_year + 1900 << "\n";
    cout << "0" + to_string(t->tm_mon + 1) << "\n";
    cout << t->tm_mday;
}