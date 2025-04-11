#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    vector<int> arr;
    cin >> st;
    stringstream ss(st);
    while (getline(ss, st, '/'))
        arr.push_back(stoi(st));
    cout << (arr[0] + arr[2] < arr[1] || arr[1] == 0 ? "hasu" : "gosu");
    return 0;
}