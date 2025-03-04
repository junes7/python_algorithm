#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string name, cl;
    int age, weight;
    while (true) {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0) break;
        cl = age > 17 || weight >= 80 ? "Senior" : "Junior";
        cout << name << ' ' << cl << "\n";
    }
    return 0;
}