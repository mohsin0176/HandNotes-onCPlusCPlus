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
   char c;
   cin>>c;
   if (c>=65&&c<=90)
   {
   	cout<<"Uppercase"<<endl;
   }
   else if (c>=97&&c<=122)
   {
   	cout<<"Lowercase"<<endl;
   } 
   else if (c>=48&&c<=57)
   {
     cout<<"Digit"<<endl;
   }
   else
   {
   	cout<<"Special"<<endl;
   }
	return 0;
}