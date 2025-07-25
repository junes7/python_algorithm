#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    vector<int> tri1(3), tri2(3);
    for (int i = 0; i < 3; i++)
        cin >> tri1[i];
    for (int i = 0; i < 3; i++)
        cin >> tri2[i];
    sort(tri1.begin(), tri1.end(), less<int>());
    sort(tri2.begin(), tri2.end(), less<int>());
    cout << (tri1[0] * tri2[0] + tri1[1] * tri2[1] == tri1[2] * tri2[2] ? "YES" : "NO");
    return 0;
}