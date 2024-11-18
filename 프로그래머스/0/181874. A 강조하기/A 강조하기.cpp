#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string r = "";
    for(int i=0;i<myString.length();i++) {
        if(myString[i]=='a' || myString[i]=='A')
            r.push_back(toupper(myString[i]));
        else
            r.push_back(tolower(myString[i]));
    }
    return r;
}