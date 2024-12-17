#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string polynomial) {
    string r="", buffer;
    int a=0,b=0;
    stringstream ss(polynomial);
    while(getline(ss,buffer,' ')) {
        if(buffer=="+")
            continue;
        else {
            if(buffer.back()=='x') {
                buffer.erase(buffer.find('x'),1);
                a+=buffer.size()<1?1:stoi(buffer);
            } else {
                b+=stoi(buffer);
            }
        }
    }
    if(a==0) {
        r+=to_string(b);
    } else {
        r+=(a==1)?"x":to_string(a)+"x";
        r+=(b==0)?"":" + "+to_string(b);
    }
    return r;
}