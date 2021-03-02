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
void display(Distance d3)
{
	cout<<d3.feet<<endl;
	cout<<d3.inches<<endl;
}
int main()
{
    Distance d1={15,6.5};
    Distance d2,d3;
    d2.feet=d1.feet;
    d2.inches=d1.inches;
    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
	display(d3);
	return 0;
}