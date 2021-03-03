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
   int choice,temp;
   cin>>choice>>temp;
   float res;
   if (choice==1)
   {
   	res=(temp-32)/1.8;
   }
   else
   {
   	res=(1.8*temp)+32;
   }

   cout<<res;
	return 0;
}