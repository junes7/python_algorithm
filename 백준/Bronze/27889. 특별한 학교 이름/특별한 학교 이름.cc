#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string s;
    map<string, string> abbrev = {{"NLCS", "North London Collegiate School"}, {"BHA", "Branksome Hall Asia"}, {"KIS", "Korea International School"}, {"SJA", "St. Johnsbury Academy"}};
    cin >> s;
    cout << abbrev[s];
    return 0;
}