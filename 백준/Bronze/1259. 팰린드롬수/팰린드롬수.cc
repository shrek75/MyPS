#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char num[6];
	char comp[6];
	while (1)
	{
		cin >> num;
		if (num[0] == '0') return 0;
		int len = strlen(num);
		for (int i=0; i< len; i++)
		{
			comp[i] = num[len - 1 - i];
		}
		comp[len] = '\0';

		if (strcmp(num, comp) == 0) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
	
}