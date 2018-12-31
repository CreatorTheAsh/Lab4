#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a;
	double ch = -1;
	double n = 1.;
	double sum = 0;
	double sum_p = 0;
	const double eps = 0.000001;
	cout << "This program count logarif from number a and compare with library function logarif\nplease, enter a, it should be between 0 and 2\n";
	cout << "a = "; cin >> a;
	do {
		sum_p = sum;
		ch *= (1 - a);
		sum += (ch / n);
		n++;
	} while (abs((sum - sum_p)) > eps);
	cout << sum_p << "\n";
	cout << log(a) << "\n";
	system("pause");
	return 0;
}
