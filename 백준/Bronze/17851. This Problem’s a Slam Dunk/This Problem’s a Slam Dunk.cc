#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    int rlt=0;
    vector<int> team1(5),team2(5);
    for(int i=0;i<5;i++)
        cin>>team1[i];
    for(int i=0;i<5;i++)
        cin>>team2[i];
    sort(team1.begin(),team1.end(),less<int>());
    sort(team2.begin(),team2.end(),less<int>());
    for(int i=0;i<5;i++)
        if(team1[i]>team2[i])
            rlt+=1;
    cout<<rlt;
    return 0;
}