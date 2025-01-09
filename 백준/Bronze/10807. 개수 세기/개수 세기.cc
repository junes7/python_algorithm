#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n,elem,k;
    vector<int> t;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>elem;
        t.push_back(elem);
    }
    elem=0;
    cin>>k;
    for(int i=0;i<n;i++) {
        if(t[i]==k)
            elem+=1;
    }
    cout<<elem<<endl;
    return 0;
}