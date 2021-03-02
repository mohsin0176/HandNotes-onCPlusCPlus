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

struct Distance
{
	int feet;
	float inches;
};
int main()
{
    Distance d1={15,6.5};
    Distance d2,d3;
    d2.feet=d1.feet;
    d2.inches=d1.inches;
    d3=d1;
   	cout<<d1.feet<<endl; 
	cout<<d1.inches<<endl;    
	cout<<d2.feet<<endl;
	cout<<d2.inches<<endl;
	cout<<d3.feet<<endl;
	cout<<d3.inches<<endl;
 


cout<<<<endl;	
	return 0;
}