#include <iostream>
using namespace std;

int main(void) {
    int a,b;
    while(true) {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        printf("%d\n",a+b);
    }
    return 0;
}