#include <iostream>
using namespace std;

int main(void) {
    int h,m;
    cin>>h>>m;
    if(m>=45)
        m-=45;
    else {
        if(h==0)
            h=24;
        h-=1;
        m+=15;
    }
    cout<<h<<' '<<m<<endl;
    return 0;    
}