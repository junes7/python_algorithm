#include <cmath>
#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string t, rlt = "";
    int n;
    long long num;
    map<string, char> dic = {{"black", '0'}, {"brown", '1'}, {"red", '2'}, {"orange", '3'}, {"yellow", '4'}, {"green", '5'}, {"blue", '6'}, {"violet", '7'}, {"grey", '8'}, {"white", '9'}};
    for (int i = 0; i < 2; i++) {
        cin >> t;
        rlt += dic[t];
    }
    num = stoi(rlt);
    cin >> t;
    n = dic[t] - 48;
    num *= pow(10, n);
    cout << num;
    return 0;
}