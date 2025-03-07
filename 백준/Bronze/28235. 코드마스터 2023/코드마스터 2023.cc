#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string s;
    cin >> s;
    map<string, string> dict = {{"SONGDO", "HIGHSCHOOL"}, {"CODE", "MASTER"}, {"2023", "0611"}, {"ALGORITHM", "CONTEST"}};
    cout << dict[s];
    return 0;
}