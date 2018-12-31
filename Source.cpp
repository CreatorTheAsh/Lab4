#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	double lna = 0;
	int b;
	long double a;	
	int k = 1;
	cout << "This program count logarif from number a and compare with library function logarif\nplease, enter a, it should be between 0 and 2\na = ";
	cin >> a;
	if ((2 >= a)&&(0 < a)) {
		if (a == 1) { lna = 0; }
		else {
			do {
				lna = lna + pow((-1), k + 1)*(pow((a - 1), k) / k);
				k++;
				b = (lna * 10000000);
			} while ((b % 10 != 0)) ;
		}
	float m = lna - log(a);
	cout << "my lna = " << lna << "\n";
	cout << "library log(a) = " << log(a) << "\n";
	cout << "measurement error is " << m << "\n";
		
	}
	else {
		cout << "a is not correct, it should be between 0 and 2 \n";
	}
	system("pause");
	return 0;
}
