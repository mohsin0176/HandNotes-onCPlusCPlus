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

	int a,b,max;
	cin>>a>>b;
	if (a>b)
	{
		max=a;
	}
    else
    {
    	max=b;
    } 
    cout<<max;

	return 0;
}