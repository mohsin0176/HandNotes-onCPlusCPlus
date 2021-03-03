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
   if (isupper(c))
   {
   	cout<<"UpperCase"<<endl;
   }
   else if(islower(c))
   {
     cout<<"LowerCase"<<endl;
   }
   else if(isdigit(c))
   {
     cout<<"Digit"<<endl;
   }
   else
   {
   	cout<<"Special"<<endl;
   }
	return 0;
}