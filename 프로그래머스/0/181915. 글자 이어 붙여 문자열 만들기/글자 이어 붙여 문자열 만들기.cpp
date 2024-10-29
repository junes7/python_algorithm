#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string r="";
    for(int i=0;i<index_list.size();i++) {
        r+=my_string[index_list[i]];
    }
    return r;
}