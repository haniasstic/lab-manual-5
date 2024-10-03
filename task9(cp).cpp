#include<iostream>
#include<string>
using namespace std;
void TimeTravel(int hh, int mm);
main()
{
	int hh;
	int mm;
	cout << " Enter Hours: " << endl;
	cin >> hh;
	cout << " Enter Minutes" << endl;
	cin >> mm;
	TimeTravel(hh,mm);
}
void TimeTravel(int hh, int mm)
{
	int total_minutes,total_hours;
	total_minutes=mm+15;
	if(total_minutes>60)
{
	total_hours=hh+1;
	mm=total_minutes-60;
	cout << total_hours << ":"<<mm;
}
	else
{
	cout << total_hours << ":"<< total_minutes <<endl;
}
}
	
	
	
