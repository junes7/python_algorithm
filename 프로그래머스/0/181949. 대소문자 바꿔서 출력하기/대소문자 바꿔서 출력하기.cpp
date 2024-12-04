#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        // ascii 코드를 사용했을 때
        // if(str[i] >= 65 && str[i] <= 90) {
        //     str[i] += 32;
        // } else if(str[i] >= 97 && str[i] <= 122) {
        //     str[i] -= 32;
        // }
        if(isupper(str[i])) {
            str[i]=tolower(str[i]);
        } else {
            str[i]=toupper(str[i]);
        }
        
        
    }
    cout << str << endl;
    return 0;
}