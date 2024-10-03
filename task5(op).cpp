#include<iostream>
#include<cmath>
using namespace std;
void disc1(float disc, float a , float b, float c);
void disc2(float disc, float a, float b, float c);
void disc3(float disc, float a, float b, float c);

int main ()
{
	float a,b,c,disc;
	cout << " Enter the value of a:  " << endl;
	cin >> a;
	cout << " Enter the value of b: " << endl;
	cin >> b;
	cout << " Enter the value of c: " << endl;
	cin >> c;
	
	disc = (pow(b,2)-(4*a*c));
	if(disc>0)
{
	disc1(disc,a,b,c);
}
	if(disc==0)
{
	disc2(disc,a,b,c);
}
	if(disc<0)
{
	disc3(disc,a,b,c);
}
}
void disc1(float disc, float a, float b, float c)
{
	float root1, root2;
	root1= (-b+sqrt(disc))/(2*a);
	root2= (-b-sqrt(disc))/(2*a);
	cout << " Solution : x = " << root1 << " and " << root2;
}

void disc2(float disc,float a ,float b,float c)
{
	float root;
	root = (-b)/(2*a);
	cout << " Solution : x = " << root << endl;
}
void disc3(float disc, float a, float b, float c)
{
	float real,imaginary;
	real= (-b)/(2*a);
	imaginary= (sqrt(disc))/(2*a);
	cout << " Complex solutions : x = " << real << "+" << imaginary << " i and x = " << real<< " - " << imaginary << "i";
}
