#include <iostream>
#include <vector>
using namespace std;
vector<string> draw_stars(int n) {
    vector<string> result(n), stars;
    string t;
    if (n == 1) {
        stars.push_back("*");
        return stars;
    }
    stars = draw_stars(n / 3);
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < n / 3; i++) {
            t = "";
            if (k % 2 == 0) {
                for (int j = 0; j < 3; j++)
                    t += stars[i];
            } else {
                t += stars[i];
                for (int j = 0; j < n / 3; j++)
                    t += " ";
                t += stars[i];
            }
            result[i + k * (n / 3)] += t;
        }
    }
    return result;
}
int main(void) {
    int n;
    cin >> n;
    vector<string> result = draw_stars(n);
    for (int i = 0; i < n; i++)
        cout << result[i] << "\n";
    return 0;
}