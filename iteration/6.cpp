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
    long n,r,sum;
    cin>>n;
    sum=0;
    while(n!=0)
    {
    	r=n%10;
    	sum=sum+r;
    	n=n/10;
    }
    cout<<sum;
	return 0;
}