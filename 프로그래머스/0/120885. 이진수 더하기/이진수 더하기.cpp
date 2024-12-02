#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int TwoToTen(int num) {
    int result=0, mul=1;
    while(num>0) {
        if(num%10==1) result+=mul;
        mul*=2;
        num/=10;
    }
    return result;
}

string solution(string bin1, string bin2) {
    string r="";
    int num=TwoToTen(stoi(bin1))+TwoToTen(stoi(bin2));
    // TenToTwo
    if(num==0)
        r+='0';
    while(num>0) {
        if(num%2==1) r+='1';
        else r+='0';
        num/=2;
    }
    reverse(r.begin(),r.end());
    return r;
}