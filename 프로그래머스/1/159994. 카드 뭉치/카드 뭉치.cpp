#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string r="Yes";
    for(int i=0;i<goal.size();i++) {
        if(cards1.size()>0 and cards1[0]==goal[i])
            cards1.erase(cards1.begin());
        else if(cards2.size()>0 and cards2[0]==goal[i])
            cards2.erase(cards2.begin());
        else
            r="No";
    }
    return r;
}