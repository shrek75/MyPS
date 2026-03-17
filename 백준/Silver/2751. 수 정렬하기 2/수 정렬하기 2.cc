#include <iostream>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;



int main()
{
	set<int> set;
	
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		set.insert(input);
	}
	
	for (int n : set)
	{
		cout << n << '\n';
	}

	//vector<int> v;
	//
	//int n;
	//cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	int input;
	//	cin >> input;
	//	v.push_back(input);
	//}
	//
	//sort(v.begin(), v.end());
	//
	//for (auto n : v)
	//{
	//	cout << n << endl;
	//}

	return 0;
}
