#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int r=0;
    for(int i=0;i<signs.size();i++) {
        r+=(signs[i]==false)?-1*absolutes[i]:absolutes[i];            
    }
    return r;
}