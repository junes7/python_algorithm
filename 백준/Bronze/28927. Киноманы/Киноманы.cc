#include <iostream>
using namespace std;
int main(void) {
    int t1,e1,f1,t2,e2,f2,max_t,mel_t;
    cin>>t1>>e1>>f1;
    cin>>t2>>e2>>f2;
    max_t=t1*3+e1*20+f1*120;
    mel_t=t2*3+e2*20+f2*120;
    cout<< (max_t==mel_t? "Draw":max_t>mel_t?"Max":"Mel");
    return 0;
}