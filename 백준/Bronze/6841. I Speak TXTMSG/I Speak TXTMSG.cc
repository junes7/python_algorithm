#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st;
    map<string, string> abbrev = {{"CU", "see you"}, {":-)", "I’m happy"}, {":-(", "I’m unhappy"}, {";-)", "wink"}, {":-P", "stick out my tongue"}, {"(~.~)", "sleepy"}, {"TA", "totally awesome"}, {"CCC", "Canadian Computing Competition"}, {"CUZ", "because"}, {"TY", "thank-you"}, {"YW", "you're welcome"}, {"TTYL", "talk to you later"}};
    while (cin >> st) {
        cout << (abbrev.find(st) != abbrev.end() ? abbrev[st] : st) << "\n";
        if (st == "TTYL") break;
    }
    return 0;
}