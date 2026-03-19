#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;


int main()
{
	//bool arr[UINT_MAX];
	//
	//for (unsigned int i = 0; i <= UINT_MAX; i++)
	//{
	//	arr[i] = 1;
	//}

	//bool* arr;
	//arr = new bool[UINT_MAX+1];
	//
	//for (long long int i = 0; i <= UINT_MAX; i++)
	//{
	//	arr[i] = 1;
	//}

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set<int> set;
	int n, m, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		set.insert(x);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		cout << set.count(x) << '\n';
	}

	return 0;
}
