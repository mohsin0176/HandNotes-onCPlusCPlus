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

const float area(const float r);
inline float area(const float r)
{
	return (PI*r*r);
}

int main()
{
    cin>>radius;
    cout<<area(radius); 
	return 0;
}