#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int r=0;
    string t=to_string(order);
    for(int i=0;i<t.length();i++) {
        if(t[i]=='3' or t[i]=='6' or t[i]=='9')
            r+=1;
    }
    return r;
}