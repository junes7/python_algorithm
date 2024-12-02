#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    // string str = "!@#$%^&*(\\\'\"<>?:;";
    // char str[]="!@#$%^&*(\\\'\"<>?:;";
    int len=strlen("!@#$%^&*(\\\'\"<>?:;");
    char *str=new char[len+1];   
    strcpy(str,"!@#$%^&*(\\\'\"<>?:;");
    cout << str << endl;
    delete[] str;
    return 0;
}