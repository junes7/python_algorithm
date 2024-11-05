#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int r=0;
    if(price>=500000) {
        r=price*0.8;
    } else if(price>=300000) {
        r=price*0.9;
    } else if(price>=100000) {
        r=price*0.95;
    } else {
        r=price;
    }
    return r;
}