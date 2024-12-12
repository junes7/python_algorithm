#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    int sum=4;
    vector<int> month={31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> date={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=0;i<a-1;i++) {
        sum+=month[i];
    }
    string r=date[(sum+b)%7];
    return r;
}