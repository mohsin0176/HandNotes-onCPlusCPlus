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
    float r,h,v;
    float *pr,*ph,*pv;
    const float PI=3.1416;
	pr=&r;
	ph=&h;
	pv=&v;
	cin>>*pr>>*ph;
	*pv=PI*(*pr)*(*pr)*(*ph);
	cout<<*pv;
    
	return 0;
}

