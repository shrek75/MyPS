#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>
#include <queue>

using namespace std;


int main()
{
	int n;
	cin >> n;

	string s;

	for (int i = 0; i < n; i++)
	{
		int value = 0;
		cin >> s;
		for (char c : s)
		{
			if (c == '(') value++;
			else value--;
			if (value == -1) break;
		}
		if (value != 0) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}
