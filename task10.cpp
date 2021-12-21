#include<iostream>
using namespace std;
main()
{
	string code;
	cout<<"enter you are login password:";
	cin>> code;
	string password;
	cout<<"enter you are account  password:";
	cin>> password;

	if(code==password)
	{
		cout<<"you are logged in:";
	}
	else 
	{
		cout<<"sorry plz try again:";
	}
}
