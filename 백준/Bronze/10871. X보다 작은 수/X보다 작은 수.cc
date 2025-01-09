#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n,x,elem;
    cin>>n>>x;
    vector<int> t;
    for(int i=0;i<n;i++) {
        cin>>elem;
        t.push_back(elem);
    }
    for(int i=0;i<n;i++) {
        if(t[i]<x)
            cout<<t[i]<<' ';
    }
    cout<<endl;
    return 0;
}