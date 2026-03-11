#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
	int count;
	cin >> count;

	int score[1000];
	int max = 0;
	int total = 0;

	for (int i = 0; i < count; i++)
	{
		cin >> score[i];
		total += score[i];
		if (score[i] > max) max = score[i];
	}

	double r =  100.0 * total / (max * count);
	printf("%f", r);
	
    
    

	return 0;
	
}