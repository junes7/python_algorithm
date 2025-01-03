#include <string>
#include <vector>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string r="";
    int len;
    for(int i=0;i<queries.size();i++) {
        len=queries[i][1]-queries[i][0];
        if(len%2!=0) len+=1;
        for(int j=0;j<len/2;j++) {
            char t=my_string[queries[i][0]+j];
            my_string[queries[i][0]+j]=my_string[queries[i][1]-j];
            my_string[queries[i][1]-j]=t;
        }
    }
    r=my_string;
    return r;
}