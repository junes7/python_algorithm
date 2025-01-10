#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n,elem;
    vector<int> t;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>elem;
        t.push_back(elem);
    }
    cout<<*min_element(t.begin(),t.end())<<' '<<*max_element(t.begin(),t.end())<<endl;    
    return 0;
}