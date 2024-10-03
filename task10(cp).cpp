#include<iostream>
using namespace std;
string InEnglishWords(int num);
main()
{
	int num;
	string output;
	cout << " Enter a number in digits: " << endl;
	cin >> num;
	InEnglishWords(num);
	output= InEnglishWords(num);
	cout << output;
	
}
string 	InEnglishWords(int num)
{
	int tens,ones;
	string words,Tens,Ones;	
	//for numbers=1,2,3,4,5,6,7,8,9
	
	if(num<10)                              
{
	if(num==1)
	{	
		words="One";
	}
	if(num==2)
	{	
		words="Two";
	}
	if(num==3)
	{		
		words = "Three" ;
	}
	if(num==4)
	{	
		words = "Four";
	}
	if(num==5)
	{	
		words="Five";
	}
	if(num==6)
	{	
		words= " Six";
	}
	if(num==7)
	{	
		words= " Seven";
	}
	if(num==8)
	{
		words="Eight ";
	}
	if(num==9)
	{
		words="Nine";
	}
	return words;
}

	// For Numbers=11,12,13,14,15,16,17.18,19
	if(num<10 && num<20)		
	{
	if(num==11 )
	{	
		words= "Eleven";
	}

	if(num==12 )
	{
		words= "Twelve";	
	}
	
	if(num==13 )
	{
		words=  "Thirteen" ;
	}

	if(num== 14)
	{
		words= "Fourteen";
	}

	if(num==15 )
	{	
		words="Fifteen";	
	}
	if(num==16 )
	{
		words= "Sixteen";
	}
	if(num==17 )
	{
		words= "Seventeen";
	}

	if(num== 18)
	{
		words=" Eighteen";
	}

	if(num==19 )
	{
		words= "Nineteen" ;
	}
	return words;
}

	//For numbers=10,20,30,40,50,60,70,80,90
	if(num%10==0)
{
	if(num==10)
	{
		words= "Ten";
	}
	if(num==20)
	{
		words= "Twnety";	
	}
	if(num==30)
	{	
		words="Thirty";	
	}
	if(num==40)
	{
		words="Forty";	
	}
	if(num==50)
	{
		words= " Fifty";
	}
	if(num==60)
	{
		words="Sixty";
	}
	if(num==70)
	{
		words= "Sevety";
	}
	if(num==80)
	{
		words="Eighty";
	}
	if(num==90)
	{
		words= "Ninety";
	}
	return words;
}
	
	//For numbers=21-29,31-39,-41-19,51-59,-61-69,71-79,81-89,91-99
	
	tens=num/10;
	ones=num%10;
	if(num%10!=0 && num>20)		
{
	if(tens==2)
	{
			Tens="Twenty";
	}
	if(tens==3)
	{
		Tens="Thirty";
	}

	if(tens==4)
	{
		Tens="Forty";
	}
	if(tens==5)
	{
		Tens="Fifty";
	}
	if(tens==6)
	{
		Tens="Sixy";
	}
	if(tens==7)
	{
		Tens="Seventy";
	}
	if(tens==8)
	{
		Tens="Eighty";
	}
	if(tens==9)
	{
		Tens="Ninety";
	}
	
	if(ones==1)
	{
		Ones="one";
	}

	if(ones==1)
	{
		Ones=" One";
	}

	if(ones==2)
	{
		Ones=" Two";
	}

	if(ones==3)
	{
		Ones=" Three";
	}

	if(ones==4)
	{
		Ones=" Four";
	}

	if(ones==5)
	{
		Ones=" Five";
	}

	if(ones==6)
	{
		Ones=" Six";
	}

	if(ones==7)
	{
		Ones=" Seven";
	}

	if(ones==8)
	{
		Ones=" Eight";
	}

	if(ones==9)
	{
		Ones=" Nine";
	}
	return Tens + Ones;
	return words;
}
}











































































































































































