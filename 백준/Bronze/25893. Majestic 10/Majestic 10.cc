#include <iostream>
using namespace std;
int main(void) {
    int n, cnt, elem;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < 3; j++) {
            cin >> elem;
            cout << elem << ' ';
            if (elem >= 10)
                cnt += 1;
        }
        cout << "\n";
        if (cnt == 0)
            cout << "zilch" << "\n\n";
        else if (cnt == 1)
            cout << "double" << "\n\n";
        else if (cnt == 2)
            cout << "double-double" << "\n\n";
        else
            cout << "triple-double" << "\n\n";
    }
    return 0;
}