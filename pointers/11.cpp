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
	int a[2][3]={{10,20,30},{40,50,60}};
	int *p;
	int i,j;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<*(*(a+i)+j);
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<<*(a[i]+j);
		}
	}
    p=&a[0][0];
    for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout<< *(p+3*i+j);
		}
	}
	return 0;
}

