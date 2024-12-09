#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int r=0;
    while(true) {
        if(bill[0]<=wallet[0] && bill[1]<=wallet[1]) {
            break;
        } else if(bill[1]<=wallet[0] && bill[0]<=wallet[1]) {
            break;
        }
        if(bill[0]>bill[1])
            bill[0]/=2;
        else
            bill[1]/=2;
        r+=1;
    }
    return r;
}