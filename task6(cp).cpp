#include<iostream>
using namespace std;
string checkAlphabectCase(char);
main()
{
	char ch;
	cout << " Enter a character (A/a): " << endl;
	cin >> ch ;
	checkAlphabectCase(ch);
}
string checkAlphabectCase(char)
{
	char ch;
	string str1;
	if(ch=='A')
{
	str1= "You have entered a Capical letter" ;
	cout << str1;
}
	if(ch=='a')
{	
	str1= "You have entered a small letter" ;
	cout << str1;
	return str1;
}
	else
{	cout << " Enter a valid input " << endl;
}
}
