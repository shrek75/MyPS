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
	queue<int> q;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		q.pop();
		int temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front();

	return 0;
}
