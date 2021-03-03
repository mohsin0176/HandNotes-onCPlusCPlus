#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#include<fstream.h>
#include<process.h>
#define PI 3.1416
using namespace std;


int main()
{  
	char ch;
	cin>>ch;
	if ((ch>='A')&&(ch<='Z'))
	{
		cout<<"UpperCase"<<endl;
	}
	else if ((ch>='a')&&(ch<='z'))
	{
		cout<<"LowerCase"<<endl;
	}
	else if ((ch>='0')&&(ch<='9'))
	{
		cout<<"Digit"<<endl;
	}
	else
	{
		cout<<"Special"<<endl;
	}



	return 0;
}