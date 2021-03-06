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
    int i,n,sum;
    cin>>n;
    sum=0;
    for (int i = 1; i <=n/2; ++i)
    {
    	if (n%i==0)
    	{
    		sum=sum+i;
    	}
    }
    if (sum==n)
    {
    	cout<<"Perfect Number"<<endl;
    }
    else
    {
    	cout<<"Not Perfect Number"<<endl;
    }
	return 0;
}