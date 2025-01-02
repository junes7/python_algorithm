#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int i, int j, int k) {
    int r=0,tem;
    string ch="";
    // for(int t=i;t<j+1;t++) {
    //     if(to_string(t).find(to_string(k))!=-1) {
    //         ch=to_string(t);
    //         for(int u=0;u<ch.size();u++) {
    //             if(ch[u]==char(48+k)) {
    //                 r+=1;
    //             }
    //         }
    //     }
    // }
    for(int t=i;t<j+1;t++) {
        tem=t;
        while(tem>=10) {
            if(tem%10==k)
                r+=1;
            tem/=10;
        }
        if(tem==k)
            r+=1;
    }
    return r;
}