#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string r="";
    bool flag;
    string vow="aeiou";
    for(int i=0;i<my_string.size();i++) {
        // method1 use for loop
        flag=true;
        for(int j=0;j<vow.size();j++)
            if(my_string[i]==vow[j]) {
                flag=false;
                break;
            }
        if(flag)
            r+=my_string[i];
        // method2 find function
        // if(vow.find(my_string[i])==string::npos)
        //     r+=my_string[i];
    }
    return r;
}