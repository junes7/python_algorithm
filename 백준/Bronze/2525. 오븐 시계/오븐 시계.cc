#include <iostream>
using namespace std;

int main(void) {
    int h,m,d,t;
    cin>>h>>m;
    cin>>d;
    if(m+d<60)
        m+=d;
    else {
        h+=(m+d)/60;
        if(h>=24)
            h-=24;
        m=(m+d)%60;
    }
    cout<<h<<' '<<m<<endl;
    return 0;
}