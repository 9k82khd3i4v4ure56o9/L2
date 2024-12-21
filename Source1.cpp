#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

double fact(int n)
{
	double res = 1;

	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}

	return res;
}

double f(double x, int n) 
{
	if (n == 0) 
	{
		return 1;
	}

	double pre_p = f(x, n - 1);
	double p = (2 * n + 1) / fact(n) * pow(x, 2 * n);
	cout << n << "-е слагаемое = " << p << endl;
	double result = pre_p + p;
	return result;
}

int X, N;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите x и n:" << endl;
	cin >> X >> N;

	while (N < 0)
	{
		cout << "n не может быть меньше 0. ¬ведите n:" << endl;
		cin >> N;
	}

	double result = f(X, N);
	cout << result;
	return 0;
}

