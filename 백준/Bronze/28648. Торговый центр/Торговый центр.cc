#include <iostream>
using namespace std;
int main(void) {
    int n, ti, li, minn = 200;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ti >> li;
        if (minn > ti + li)
            minn = ti + li;
    }
    cout << minn;
    return 0;
}