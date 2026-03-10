#include <iostream>

using namespace std;

int main()
{
	int cnt;
	int target;

	cin >> cnt;
	cin >> target;

	int cards[100];

	for (int i = 0; i < cnt; i++)
	{
		cin >> cards[i];
	}

	int value = 0;

	//3중 for문을 써야한다고? 이게맞나?
	for (int x = 0; x < cnt - 2; x++)
	{
		for (int y = x + 1; y < cnt - 1; y++)
		{
			for (int z = y + 1; z < cnt; z++)
			{
				if (cards[x] + cards[y] + cards[z] > target) continue;
				if (target - (cards[x] + cards[y] + cards[z]) < target - value) value = cards[x] + cards[y] + cards[z];
			}
		}
	}

	cout << value;
	
}