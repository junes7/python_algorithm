#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<int>> lines) {
    int ran=0;
    map<int,int> m;
    for(auto const &line:lines) {
        for(int i=line[0];i<line[1];i++)
            m[i]++;
    }
    for(auto const &i:m) {
        if(i.second>1)
            ran++;
    }
    return ran;
}