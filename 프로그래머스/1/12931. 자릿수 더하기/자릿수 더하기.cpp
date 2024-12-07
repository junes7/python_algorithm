#include <iostream>

using namespace std;
int solution(int n)
{
    int r=0;
    string t=to_string(n);
    for(int i=0;i<t.length();i++) {
        r+=t[i]-48;
    }
    return r;
}