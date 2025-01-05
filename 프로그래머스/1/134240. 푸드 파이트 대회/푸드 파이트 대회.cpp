#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string r="",t="";
    for(int i=1;i<food.size();i++) {
        for(int j=0;j<food[i]/2;j++)
            t+=to_string(i);
    }
    r+=t+'0';
    reverse(t.begin(),t.end());
    r+=t;
    return r;
}