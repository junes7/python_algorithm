#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    vector<vector<string>> num={{"zero","0"},{"one","1"},{"two","2"},{"three","3"},{"four","4"},{"five","5"},{"six","6"},{"seven","7"},{"eight","8"},{"nine","9"}};
    for(int i=0;i<num.size();i++) {
        while(s.find(num[i][0])!=string::npos) {
            s.replace(s.find(num[i][0]),num[i][0].length(),num[i][1]); 
        }
    }
    int r=stoi(s);
    return r;
}