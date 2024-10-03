#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	float base, exponent;
	cout << " Enter a base's number" << endl;
	cin >> base;
	cout << " Enter the exponent's number " << endl;
	cin >> exponent;
	cout << base << " raised to the power " << exponent << " is: " << pow(base,exponent) << endl;
	return 0;
}
