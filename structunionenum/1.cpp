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
    Distance d1,d2;
    d1.feet=12;
    d1.inches=9.5;
    cin>>d2.feet;
    cin>>d2.inches;
	cout<<d1.feet<<endl;
	cout<<d1.inches<<endl;
	cout<<d2.feet<<endl;
	cout<<d2.inches<<endl;
	return 0;
}