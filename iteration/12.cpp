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
    int a,b,s,hcf,i,lcm;
    cin>>a>>b;
    if (a<b)
    {
    	s=a;
    }
    else
    {
    	s=b;
    }
    for (int i = 1; i <=s; ++i)
    {
    	if ((a%i==0)&&(b%i==0))
    	{
    		hcf=i;
    	}
    }
    cout<<hcf;
    lcm=(a*b)/hcf;
    cout<<lcm;
	return 0;
}