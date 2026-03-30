#include <iostream>
#include <cstring>

using namespace std;


int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int* arr;
	arr = new int[20000001];
	memset(arr, 0, sizeof(int) * 20000001);

	int n;
	cin >> n;
	
	int value;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		arr[value + 10000000] += 1;

	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> value;
		cout << arr[value + 10000000] << ' ';
	}

	return 0;
}
