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
    int a,b,c,g;
    cin>>a>>b>>c>>g;
    if (a>b)
    {
    	if (a>c)
    	{
    		g=a;
    	}
    	else
    	{
    		g=c;
    	}
    }
    else
    {
    	if (b>c)
    	{
    		g=b;
    	}
    	else
    	{
    		g=c;
    	}
    }

    cout<<g;
	return 0;
}