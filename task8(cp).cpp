#include<iostream>
using namespace std;
void OddishOrEvenish(int num);
main()
{
	int num;
	cout << " Enter a 5-digit number: " << endl;
	cin>> num ;
	
	OddishOrEvenish(num);

}
void OddishOrEvenish(int num)
{
	int digit1,digit2,digit3,digit4,digit5,sum;
	digit1=(num/10)/10/10/10;
	digit2=(num/10)/10/10%10;
	digit3=(num/10)/10%10;
	digit4=(num/10)%10;
	digit5=(num%10);
	sum=digit1+digit2+digit3+digit4+digit5;
	if(sum%2==0)
{
	cout << "Evenish" << endl;
}
	if(sum%2==1)
{
	cout <<"Oddish" <<endl;
}
}
	
