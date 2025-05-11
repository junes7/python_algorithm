#include <iostream>
using namespace std;
int main(void) {
    int n, rem = 0, stu, app;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu >> app;
        rem += app % stu;
    }
    cout << rem;
    return 0;
}
