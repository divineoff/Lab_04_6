#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P1, S, P2;
	int n, i;
	S = 0;
	n = 1;
	while (n <= 10)
	{
		P1 = 1;
		i = 1;
		while (i <= n)
		{
			P1 *= pow(i, 2);
			i++;
		}
		P2 = 1;
		i = n;
		while (i <= 10)
		{
			P2 *= pow(i, 2);
			i++;
		}
		S += (P1 + P2) / n;
		n++;

	}
	cout << S << endl;


	S = 0;
	n = 1;
	do
	{
		P1 = 1;
		i = 1;
		do
		{
			P1 *= pow(i, 2);
			i++;
		} while (i <= n);
		P2 = 1;
		i = n;
		do
		{
			P2 *= pow(i, 2);
			i++;
		} while (i <= 10);
		S += (P1 + P2) / n;
		n++;
	} while (n <= 10);
	cout << S << endl;


	S = 0;
	for (n = 1; n <= 10; n++)
	{
		P1 = 1;
		for (i = 1; i <= n; i++)

		{
			P1 *= pow(i, 2);

		}
		P2 = 1;
		for (i = n; i <= 10; i++)
		{
			P2 *= pow(i, 2);
		}
		S += (P1 + P2) / n;

	}
	cout << S << endl;


	S = 0;
	for (n = 10; n >= 1; n--)
	{
		P1 = 1;
		for (i = 10; i >= n; i--)
		{
			P1 *= pow(i, 2);
		}
		P2 = 1;
		for (i = n; i >= 1; i--)
		{
			P2 *= pow(i, 2);
		}
		S += (P1 + P2) / n;
	}
	cout << S << endl;
	return 0;
}