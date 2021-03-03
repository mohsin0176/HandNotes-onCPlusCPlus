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
   int a=100;
   int b=200;
   switch(a)
   {
   	case 100:
   	cout<<"Outer switch"<<endl;
   	switch(b)
   	{
   		case 200:
   		cout<<"Inner Switch"<<endl;
   	}
   }

   cout<<a;
   cout<<b;
	return 0;
}