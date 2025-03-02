#include <iostream>
#include <vector>
using namespace std;
vector<string> draw_stars(int n) {
    vector<string> result(n), stars;
    string t, tem;
    if (n == 1) {
        stars.push_back("*");
        return stars;
    }
    stars = draw_stars(n / 3);
    for (int i = 0; i < n / 3; i++) {
        tem = "";
        for (int j = 0; j < 3; j++)
            tem += stars[i];
        result[i] = tem;
    }
    for (int i = 0; i < n / 3; i++) {
        t = "";
        t += stars[i];
        for (int j = 0; j < n / 3; j++)
            t += " ";
        t += stars[i];
        result[i + 1 * (n / 3)] = t;
    }
    for (int i = 0; i < n / 3; i++) {
        tem = "";
        for (int j = 0; j < 3; j++)
            tem += stars[i];
        result[i + 2 * (n / 3)] = tem;
    }
    return result;
}
int main(void) {
    int n;
    vector<string> result;
    cin >> n;
    result = draw_stars(n);
    for (int i = 0; i < n; i++) {
        cout << result[i] << "\n";
    }
    return 0;
}