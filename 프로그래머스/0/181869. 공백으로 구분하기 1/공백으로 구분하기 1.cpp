#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> r;
    stringstream ss(my_string);
    string buffer;
    while(getline(ss,buffer,' ')) {
        r.push_back(buffer);
    }
    return r;
}