#include <vector>
#include <string>

using namespace std;

int solution(string s)
{
    int r=-1;
    vector<char> al;
    for(int i=0;i<s.length();i++) {
        if(al.size()==0)
            al.push_back(s[i]);
        else {
            if(al.back()==s[i])
                al.erase(al.begin()+al.size()-1);
            else
                al.push_back(s[i]);
        }
    }
    return r=(al.size()==0)?1:0;
}