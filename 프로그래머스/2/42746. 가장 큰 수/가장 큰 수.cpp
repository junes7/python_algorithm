#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string r="";
    vector<string> arr;
    for(int i=0;i<numbers.size();i++)
        arr.push_back(to_string(numbers[i]));
    sort(arr.begin(),arr.end(),[](string &a,string &b){
        return a+b>b+a;
    });
    for(int i=0;i<arr.size();i++)
        r+=arr[i];
    return r=(r[0]=='0')?"0":r;
}