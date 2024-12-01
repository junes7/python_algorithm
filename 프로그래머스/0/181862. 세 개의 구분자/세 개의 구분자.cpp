#include <string>
#include <vector>
using namespace std;

vector<string> solution(string myStr) {
    int i=0,start=0,end=0;
    vector<string> r;
    while(i<myStr.size()) {
        if(myStr[i]=='a' || myStr[i]=='b' || myStr[i]=='c') {
            i++;
        } else {
            start=i;
            while(true) {
                if(myStr[i]=='a' || myStr[i]=='b' || myStr[i]=='c') {
                    break;
                } else {
                    i++;
                }
            }
            end=i;
            r.push_back(myStr.substr(start,end-start));
        }
    }
    if(r.size()==0) {
        r.push_back("EMPTY");
    }
    return r;
}