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

void display(int *);

void display(int *p)
{   
	int i;
	
	for (int i = 0; i < 5; ++i)
	{
		cout<<*(p+i)<<endl;
	}
}
int main()
{
   int a[]={10,20,30,40,50,60};
   display(a);
	return 0;
}

