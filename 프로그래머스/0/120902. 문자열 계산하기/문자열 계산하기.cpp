#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int r=0;
    stringstream ss(my_string);
    string buffer;
    vector<int> num;
    vector<string> op;
    while(getline(ss,buffer,' ')) {
        if(atoi(buffer.c_str()))
            num.push_back(stoi(buffer));
        else
            op.push_back(buffer);
    }
    r=num[0];
    for(int i=0;i<op.size();i++) {
        if(op[i]=="+")
            r+=num[i+1];
        else
            r-=num[i+1];
    }
    return r;
}