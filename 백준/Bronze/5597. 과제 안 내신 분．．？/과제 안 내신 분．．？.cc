#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int elem,num[31]={0,};
    vector<int> absn;
    for (int i = 0; i < 28; i++) {
        cin >> elem;
        num[elem]=1;
    }
    for (int i = 1; i < sizeof(num)/sizeof(int); i++) {
        if(num[i]==0) {
            absn.push_back(i);
        }
    }
    for (int i = 0; i < absn.size(); i++)
        cout << absn[i] << endl;
    return 0;
}