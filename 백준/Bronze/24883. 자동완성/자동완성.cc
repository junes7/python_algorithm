#include <iostream>
using namespace std;
int main(void) {
    char alpha;
    cin >> alpha;
    cout << (alpha == 'N' || alpha == 'n' ? "Naver D2" : "Naver Whale");
    return 0;
}