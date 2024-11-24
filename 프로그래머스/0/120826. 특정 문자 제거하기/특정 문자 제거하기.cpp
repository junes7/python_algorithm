#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string letter) {
    // string r = "";
    // for(int i=0;i<my_string.length();i++) {
    //     if(my_string[i]==letter)
    //         r+=my_string[i];
    // }
    while(my_string.find(letter)!=-1) {
        cout<<my_string.find(letter)<<endl;
        my_string.erase(my_string.find(letter),1);
    }
    return my_string;
}