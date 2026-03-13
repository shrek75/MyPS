#include <iostream>

using namespace std;

//a 와 b 의 최대공약수
int Euclid(int a, int b)
{
	int r = a % b;
	if (r != 0) return Euclid(b, r);
	return b;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << Euclid(a, b) << endl;
	cout << a * b / Euclid(a, b) << endl;
	
	return 0;	
}
