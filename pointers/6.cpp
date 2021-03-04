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
	int a[]={10,20,30,40,50,60};
	int *p;
	int i;
	p=&a[0];
	for (int i = 0; i < 5; ++i)
	{
		cout<<a[i]<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<i[a]<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<*(a+i)<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<*(p+i)<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<p[i]<<endl;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout<<*p++<<endl;
	}

	return 0;
}

