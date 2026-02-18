#include <iostream>

using namespace std;

int main()
{

	int a, b, c;
	
	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0)
		{
			if (a == 0 && b == 0 && c == 0)
				return 0;
			printf("wrong\n");
		}

		if (a > b)
		{
			int temp = b;
			b = a;
			a = temp;
		}
		if (b > c)
		{
			int temp = b;
			b = c;
			c = temp;
		}

		if (c * c == a * a + b * b)
			printf("right\n");
		else printf("wrong\n");
		
	}


	return 0;
}