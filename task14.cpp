#include<iostream>
using namespace std;
main()
{
	float num1,num2;
	float value;
	char oper;
	cout<<"enter two number:";
	cin>> num1>>num2;
	cout<<"enter operator (*,+,-,/):";
	cin>> oper;
	if(oper=='*')
	{
		value=num1/num2;
		cout<<"value is "<< value;
	}
	else if(oper=='-')
	{
		value=num1+num2;
		cout<<"value is "<< value;
	}
	else if(oper=='+')
	{
		value=num1-num2;
		cout<<"value is "<< value;
	}
	else 
	{
		value=num1*num2;
		cout<<"value is "<< value;
	}
}
	
	









