#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int r = 1;
    for(int i=0;i<box.size();i++) {
        r*=(box[i]/n);
    }
    return r;
}