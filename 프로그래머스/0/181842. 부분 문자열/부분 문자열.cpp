#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int r = (str2.find(str1)!=-1)?1:0;
    
    return r;
}