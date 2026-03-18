#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


struct pos
{
	int x;
	int y;
};

bool cmp(pos a, pos b)
{
	if (a.x == b.x)
		return a.y < b.y;
	return a.x < b.x;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pos> v;
	int n;
	int x, y;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end(), cmp);
	
	for (auto p : v)
	{
		cout << p.x << ' ' << p.y << '\n';
	}

	return 0;
}
