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
   int a=10,b=20,c=30;
   int *p[3],*t;
   int i;
   p[0]=&a;
   p[1]=&b;
   p[2]=&c;
   for (int i = 0; i < 3; ++i)
   {
   	 cin>>*p[i]<<endl;
   }
   t=p[0];
   p[0]=p[2];
   p[2]=t;
   for (int i = 0; i < 3; ++i)
   {
   	cout<<*p[i]<<endl;
   }
	return 0;
}

