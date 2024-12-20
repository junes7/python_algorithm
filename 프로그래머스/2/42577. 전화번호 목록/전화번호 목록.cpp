#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool r=true;
    sort(phone_book.begin(),phone_book.end(),less<string>());
    for(int i=1;i<phone_book.size();i++) {
        if(phone_book[i-1]==phone_book[i].substr(0,phone_book[i-1].size())) {
            r=false;
            break;
        }
    }
    return r;
}