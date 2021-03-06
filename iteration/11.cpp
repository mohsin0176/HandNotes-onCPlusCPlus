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

	int n,x,r,sum,i,f;
	cin>>n;
	x=n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		f=1;
		for (int i = 1; i <=r; ++i)
		{
			f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
	if (sum==x)
	{
		cout<<"Strong Number or Not"<<endl;
	}
	else
	{
		cout<<"Not Strong Number"<<endl;
	}

	return 0;
}