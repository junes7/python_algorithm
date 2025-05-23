#include <iostream>
using namespace std;
int main(void) {
    int n, c, a, t_area = 0, t_bed = 0;
    double t_price = 0;
    string st;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> a >> st;
        if (st == "bedroom")
            t_bed += a;
        t_area += a;
        t_price += (st == "balcony" ? a / 2.0 : a) * c;
    }
    cout << t_area << "\n";
    cout << t_bed << "\n";
    cout << fixed;
    cout.precision(6);
    cout << t_price;
    return 0;
}