#include <iostream>
#include <set>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int nums[100];
	for (int i = 0; i < num; i++)
	{
		cin >> nums[i];
	}

	int count = num;

	for (int i = 0; i < num; i++)
	{
		if (nums[i] == 1)
		{
			count--;
			continue;
		}
		if (nums[i] == 2)
		{
			continue;
		}

		int end = sqrt(nums[i]) + 1;
		
		for (int j = 2; j <= end; j++)
		{
			if (nums[i] % j == 0)
			{
				count--;
				break;
			}
		}
	}

	cout << count;
	return 0;
}