#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int t;
    string name, formatn;
    vector<string> sname = {"branksomeh", "koreainter", "stjohnsbur", "northlondo"};
    vector<string> abbrev = {"BHA", "KIS", "SJA", "NLCS"};
    cin >> name;
    for (int i = 0; i < 4; i++) {
        t = name[0] - sname[i][0], formatn = "";
        if (t >= 0) {
            for (int j = 0; j < 10; j++)
                formatn += sname[i][j] + t > 122 ? char(sname[i][j] + t - 26) : char(sname[i][j] + t);
        } else {
            for (int j = 0; j < 10; j++)
                formatn += sname[i][j] + t < 97 ? char(sname[i][j] + t + 26) : char(sname[i][j] + t);
        }
        if (name == formatn) {
            cout << abbrev[i];
            break;
        }
    }
    return 0;
}