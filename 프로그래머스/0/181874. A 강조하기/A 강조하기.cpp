#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string r = "";
    for(int i=0;i<myString.length();i++) {
        r.push_back(myString[i]=='a' || myString[i]=='A'?toupper(myString[i]):tolower(myString[i]));
    }
    return r;
}