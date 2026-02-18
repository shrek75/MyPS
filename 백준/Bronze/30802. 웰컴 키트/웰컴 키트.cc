#include <iostream>

using namespace std;

int main()
{

	int N, T, P;
	int S, M, L, XL, XXL, XXXL;

	cin >> N >> S >> M >> L >> XL >> XXL >> XXXL >> T >> P;

	S--;
	M--;
	L--;
	XL--;
	XXL--;
	XXXL--;

	int a, b, c;
	a = 0;
	if (S != -1)
		a += S / T + 1;
	if (M != -1)

		a += M / T + 1;
	if (L != -1)

		a += L / T + 1;
	if (XL != -1)

		a += XL / T + 1;
	if (XXL != -1)

		a += XXL / T + 1;
	if (XXXL != -1)

		a += XXXL / T + 1;

	b = N / P;
	c = N % P;

	printf("%d\n%d %d", a, b, c);

	return 0;
}