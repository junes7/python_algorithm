#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string r= "";
    for(int i=0;i<my_string.length();i++) {
        if(isupper(my_string[i]))
            r+=tolower(my_string[i]);
        else
            r+=toupper(my_string[i]);
    }
    
    return r;
}