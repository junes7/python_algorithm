#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> r;
    for(int i=0; i<names.size(); i=i+5) {
        if(i%5==0)
            r.push_back(names[i]);
    }
    return r;
}