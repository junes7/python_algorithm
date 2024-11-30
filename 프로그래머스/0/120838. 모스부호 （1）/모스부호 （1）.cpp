#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

string solution(string letter) {
    string r="", buffer;
    stringstream ss(letter);
    map<string, char> morse={
        {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},
        {".",'e'},{"..-.",'f'},{"--.",'g'},{"....",'h'},
        {"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
        {"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},
        {"--.-",'q'},{".-.",'r'},{"...",'s'},{"-",'t'},
        {"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
        {"-.--",'y'},{"--..",'z'}
    };
    while(getline(ss,buffer,' ')) {
        r+=morse[buffer];
    }
    return r;
}