#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    string st;
    vector<int> arr;
    for (int i = 1; i < 6; i++) {
        cin >> st;
        if (st.find("FBI") != string::npos) {
            arr.push_back(i);
        }
    }
    if (arr.size()) {
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << ' ';
    } else {
        cout << "HE GOT AWAY!";
    }
    return 0;
}