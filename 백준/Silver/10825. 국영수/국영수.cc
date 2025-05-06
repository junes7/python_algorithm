#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct stu {
    string name;
    int kor, eng, math;
};
bool cmp(stu &v1, stu &v2) {
    if (v1.kor == v2.kor && v1.eng == v2.eng && v1.math == v2.math) return v1.name < v2.name;
    if (v1.kor == v2.kor && v1.eng == v2.eng) return v1.math > v2.math;
    if (v1.kor == v2.kor) return v1.eng < v2.eng;
    return v1.kor > v2.kor;
}
int main(void) {
    int n;
    cin >> n;
    vector<stu> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << arr[i].name << "\n";
    return 0;
}