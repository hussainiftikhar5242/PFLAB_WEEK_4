#include<iostream>
using namespace std;
main()
{
	float salary;	
	cout<<"enter a salary:";
	cin>> salary;
	float advance =(salary*50)/100;
	float total_advance=advance*6;
	float price=50000;
	cout<<"price of laptop is "<< price<<endl;
	price=price-total_advance;
	float month=price/advance;
	float days=month*30;
	int  month1=month;
	if(total_advance >= 50000)
	{
		cout<<"you can buy the laptop";
	}
	else
	{
		cout<<"sorry please work for :"<< month1<<"  "<<"months"<<"  "<<days<<" "<<"and days:";
	}
	
	
	
}	









