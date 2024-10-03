#include<iostream>
using namespace std;
string IsSymmetrical(int input);
main()
{
	 int input;
	cout << "Enter a 3-digit number: " << endl;
	cin >> input;
	IsSymmetrical(input);
}
string IsSymmetrical(int input)
{
	int first_digit, last_digit;
	first_digit= input/100;
	last_digit= input%10;
	if(first_digit==last_digit)
{
	string ans="true" ;
	cout << " The number is symmetrical. " << endl;
	return ans ;
}
	if(first_digit!=last_digit)
{
	string ans="false";
	cout << " The number is not symmetrical. " << endl;
	return ans;
}
}
