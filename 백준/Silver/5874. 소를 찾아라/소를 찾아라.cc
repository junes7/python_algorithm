#include <iostream>
#include <string>
#include <vector>
using namespace std;
string N;
vector<int> front;
vector<int> back;
int sum = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N.size() - 1; i++) {
		if (N[i] == '(' && N[i + 1] == '(') front.push_back(i);
		if (N[i] == ')' && N[i + 1] == ')') back.push_back(i);
	}
	for (int i = 0; i < front.size(); i++) {
		for (int j = 0; j < back.size(); j++) {
			if (front[i] < back[j]) sum++;
		}
	}
	cout << sum;
}