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

#define INDIA 1
#define USA 1

#if(defined INDIA)
#define PI 3.1416
#endif

#if(defined USA)
#define PI 3.14
#endif

int main()
{ 

	float r,a;
	cin>>r;
	a=PI*r*r;
	cout<<a;

	return 0;
}

