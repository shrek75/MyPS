#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main()
{
	int nums;
	cin >> nums;
	set<string> set;
	for (int i = 0; i < nums; i++)
	{
		string s;
		cin >> s;
		set.insert(s);
	}
	vector<string> v(set.begin(), set.end());

	sort(v.begin(), v.end(), cmp);

	for (auto x : v)
	{
		cout << x << endl;
	}
	

	return 0;
}
