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

void AreaCircum(float,float &,float &);
void AreaCircum(float r,float &ar,float &cir)
{
	ar=PI*r*r;
	cir=2*PI*r;
}
int main()
{
    float area,radius,circum;
    cin>>radius;
    AreaCircum(radius,area,circum);
    cout<<area;
    cout<<circum;
	return 0;
}