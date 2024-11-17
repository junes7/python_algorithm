#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int r = 0;
    // if(ineq=="<") {
    //     r=(eq=="=")?n<=m:n<m;
    // } else {
    //     r=(eq=="=")?n>=m:n>m;
    // }
    r=(ineq=="<")?((eq=="=")?n<=m:n<m):((eq=="=")?n>=m:n>m);
    return r;
}