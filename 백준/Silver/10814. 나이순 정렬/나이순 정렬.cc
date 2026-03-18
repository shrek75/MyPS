#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	multimap<int, string> map;

	int n;
	cin >> n;
	int age;
	string name;

	for (int i = 0; i < n; i++)
	{
		cin >> age;
		cin >> name;
		map.insert({ age,name });
	}

	for (auto x : map)
	{
		cout << x.first << ' ' << x.second << '\n';
	}

	return 0;
}
