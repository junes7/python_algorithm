#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> r;
    string t;
    for(int i=0;i<arr1.size();i++) {
        t="";
        for(int j=n-1;j>=0;j--) {
            // if((arr1[i]>>j)&1||(arr2[i]>>j)&1==1)
            //     t+='#';
            // else
            //     t+=' ';
            t+=(arr1[i]>>j)&1||(arr2[i]>>j)&1==1?'#':' ';
        }
        r.push_back(t);
    }
    return r;
}