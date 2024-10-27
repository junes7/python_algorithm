#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;
    // str1.append(str2);
    str1+=str2;
    cout << str1 << endl;
    return 0;
}