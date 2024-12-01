#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int r=0;
    string t;
    for(int i=0;i<array.size();i++) {
        t=to_string(array[i]);
        for(int j=0;j<t.size();j++) {
            if(t[j]=='7')
                r+=1;
        }
    }
    return r;
}