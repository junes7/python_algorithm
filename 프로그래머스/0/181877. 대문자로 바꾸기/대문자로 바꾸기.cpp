#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string r = "";
    for(int i=0;i<myString.length();i++)
        r+=toupper(myString[i]);
    return r;
}