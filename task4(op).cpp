#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float base,angle,height;
	float radian;
	cout << " Enter the distance from the base of the tree (in feet) : " << endl;
	cin >> base;
	cout << " Enter the angle of elevation ( in degrees):  " << endl;
	cin >> angle;
	radian = angle/57.2958;
	height= base*tan(radian);
	cout << " The height of the tree is: " << height <<  " feet " << endl;
	return 0;
} 
	