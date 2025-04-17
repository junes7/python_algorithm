#include <iostream>
#include <map>
using namespace std;
int main(void) {
    string st;
    map<int, string> num = {{0, "0000\n0  0\n0  0\n0  0\n0000\n"}, {1, "   1\n   1\n   1\n   1\n   1\n"}, {2, "2222\n   2\n2222\n2\n2222\n"}, {3, "3333\n   3\n3333\n   3\n3333\n"}, {4, "4  4\n4  4\n4444\n   4\n   4\n"}, {5, "5555\n5\n5555\n   5\n5555\n"}, {6, "6666\n6\n6666\n6  6\n6666\n"}, {7, "7777\n   7\n   7\n   7\n   7\n"}, {8, "8888\n8  8\n8888\n8  8\n8888\n"}, {9, "9999\n9  9\n9999\n   9\n   9\n"}};
    cin >> st;
    for (int i = 0; i < st.size(); i++)
        cout << num[st[i] - 48] << "\n";
    return 0;
}