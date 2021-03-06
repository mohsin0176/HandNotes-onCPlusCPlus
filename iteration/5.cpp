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
   long int n,c;
   cin>>n;
   c=0;
   while(n!=0)
   {
   	n=n/10;
   	c=c+1;
   }
   cout<<c;
	return 0;
}