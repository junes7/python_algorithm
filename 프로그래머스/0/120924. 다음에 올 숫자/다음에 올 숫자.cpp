#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int r=0;
    if(common[2]-common[1]==common[1]-common[0]) {
        r=common[common.size()-1]+(common[1]-common[0]);
    } else {
        r=common[common.size()-1]*(common[1]/common[0]);
    }
    return r;
}