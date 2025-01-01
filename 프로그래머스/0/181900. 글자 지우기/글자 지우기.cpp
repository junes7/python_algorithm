#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(),indices.end(),less<int>());
    bool flag;
    string r="";
    // for(int i:indices) {
    //     my_string.erase(i,1);
    // }
    
    for(int i=0;i<my_string.size();i++) {
        flag=true;
        for(int j=0;j<indices.size();j++)
            if(i==indices[j]) {
                flag=false;
                break;
            }
        if(flag)
            r+=my_string[i];    
    }
    return r;
}