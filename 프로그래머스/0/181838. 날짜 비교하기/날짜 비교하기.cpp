#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int r=0;
    for(int i=0;i<date1.size();i++) {
        if(date1[i]==date2[i])
            continue;
        else {
            return date1[i]<date2[i];
        }
    }
    return r;
}