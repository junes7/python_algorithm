#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string bef, aft;
		getline(cin, bef);
		getline(cin, aft);
		int size = bef.size();
		for (int i = 0; i < size; i++)
		{
			if (bef[i] == ' ')
				cout << " ";
			else
			{
				cout << aft[bef[i] - 'A'];
			}
		}cout << endl;
	}
}