#include<iostream>
using namespace std;
main()
{
	float price=0;
	float discount=0;
	cout<<"enter a value:";
	cin>> price;
	if( price <= 5000)
	{
		discount=(price*5)/100;
		price=price-discount;
		cout<<"price after discount:"<< price;
	}
	else 
	{
		discount=(price*10)/100;
		price=price-discount;
		cout<<"price after discount:"<< price;
	}
}