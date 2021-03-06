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
    int i,x,n,r,sum;
    cin>>n;
    x=n;
    sum=0;
    while(n!=0)
    {
    	r=n%10;
    	sum=sum+(r*r*r);
    	n=n/10;
    }
    if (sum==x)
    {
    	cout<<"Armstrong Number"<<endl;
    }
    else
    {
    	cout<<"Not Armstrong Number"<<endl;
    }
	return 0;
}