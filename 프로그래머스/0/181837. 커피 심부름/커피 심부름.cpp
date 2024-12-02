#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> order) {
    int r=0;
    for(int i=0;i<order.size();i++) {
        // if(order[i].find("latte")!=-1)
        //     r+=5000;
        // else
        //     r+=4500;
        r+=(order[i].find("latte")!=-1)?5000:4500;
    }
    return r;
}