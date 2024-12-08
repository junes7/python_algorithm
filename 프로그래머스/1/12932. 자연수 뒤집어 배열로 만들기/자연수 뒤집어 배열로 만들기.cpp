#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> r;
    string num=to_string(n);
    for(int i=num.length()-1;i>=0;i--)
        r.push_back(num[i]-48);
    return r;
}