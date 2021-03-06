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
   int a,b,g,hcf,i,lcm;
   cin>>a>>b;
   if (a>b)
   {
   	g=a;
   }
   else
   {
   	g=b;
   }
   for (int i = g; i <=(a*b); ++i)
   {
   	 if ((i%a==0)&&(i%b==0))
   	 {
   	 	lcm=i;
   	 	break;
   	 }
   }
   cout<<lcm;
   hcf=(a*b)/lcm;
   cout<<hcf;
	return 0;
}