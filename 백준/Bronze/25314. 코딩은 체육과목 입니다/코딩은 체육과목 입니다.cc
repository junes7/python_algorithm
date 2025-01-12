#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin>>n;
    string t;
    for(int i=0;i<n/4;i++) {
        t+="long ";
    }
    t+="int";
    cout<<t<<endl;
    return 0;   
}