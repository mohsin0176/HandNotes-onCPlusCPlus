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
   int m;
   cin>>m;
   if (m>=80)
   {
   	cout<<"A+"<<endl;
   }
   else if(m<80&&m>=70)
   {
    cout<<"A"<<endl;
   }
   else if(m<70&&m>=60)
   {
    cout<<"A-"<<endl;
   }
   else if(m<60&&m>=50)
   {
    cout<<"B+"<<endl;
   }
   else if (m<50&&m>=40)
   {
   	  cout<<"B"<<endl;
   }
   else if (m<40&&m>=35)
   {
   	 cout<<"B-"<<endl;
   }
   else
   {
   	cout<<"B"<<endl;
   }
	return 0;
}