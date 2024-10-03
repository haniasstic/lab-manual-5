#include<iostream>
#include<string>
using namespace std;
string calculatePoolState(float V,float P1, float P2, float H);
main()
{
	float V,P1,P2,H;
	string output;
	cout << " Enter the volume of pool in liters: ";
	cin >> V;
	cout << " Enter flow rate of the first pipe per hour ";
	cin >> P1;
	cout << " Enter flow rate of second pipe per hour" ;
	cin >> P2;
	cout << " Enter hours that the worker is absent" ;
	cin >> H;
	calculatePoolState(V,P1,P2,H);
}
string calculatePoolState(float V,float P1, float P2, float H)
{
	string result;
	float total_flowrate,pool_filled,pipe1,pipe2;
	float overflow=total_flowrate - V;
	total_flowrate= (P1*H)+(P2*H);
	pool_filled=(V/total_flowrate)*100;
	pipe1=(P1*H)/total_flowrate;
	pipe2=(P2*H)/total_flowrate;
	if(total_flowrate<V)
	{
		result= "For"+to_string(H)+"hours, the pool overflows with"+ to_string(overflow)+"liters";
			
		return result;
	}
	if(total_flowrate>V)
	{
		result= " The pool is "+ to_string(pool_filled) + " full. : "+ to_string(pipe1)+":"+ to_string(pipe2) ;
		return result;
	}
}








	
	
	
