#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> r;
    int med=total/num, s;
    while(true) {
        r={};
        s=0;
        for(int i=0;i<num;i++) {
            r.push_back(med+i);
            s+=med+i;
        }
        if(r.size()==num and s==total)
            break;
        med--;
    }
    return r;
}