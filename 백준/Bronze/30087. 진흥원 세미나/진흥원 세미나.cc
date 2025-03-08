#include <iostream>
#include <map>
using namespace std;
int main(void) {
    int n;
    string st;
    cin >> n;
    map<string, string> dict = {{"Algorithm", "204"}, {"DataAnalysis", "207"}, {"ArtificialIntelligence", "302"}, {"CyberSecurity", "B101"}, {"Network", "303"}, {"Startup", "501"}, {"TestStrategy", "105"}};
    for (int i = 0; i < n; i++) {
        cin >> st;
        cout << dict[st] << "\n";
    }
    return 0;
}