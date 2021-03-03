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
   int a,b,c,max;
   cin>>a>>b>>c;
   if ((a>b)&&(a>c))
   {
   	max=a;
   }
   else if ((b>a)&&(b>c))
   {
   	max=b;
   }
   else
   {
   	max=c;
   }
    cout<<max;
	return 0;
}