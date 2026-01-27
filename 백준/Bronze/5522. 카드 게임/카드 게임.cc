#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];

	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		total += arr[i];
	}

	cout << total;
    
    return 0;
}