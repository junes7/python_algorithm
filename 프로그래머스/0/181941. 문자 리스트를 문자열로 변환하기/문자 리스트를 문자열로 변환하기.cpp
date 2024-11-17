#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string r="";
    for(int i=0;i<arr.size();i++) {
        r+=arr[i];
    }
    return r;
}