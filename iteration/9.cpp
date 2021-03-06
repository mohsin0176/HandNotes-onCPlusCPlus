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
    int n,i,flag=0;
    cin>>n;
    for (int i = 0; i < n/2; ++i)
    {
    	if (n%i==0)
    	{
    		flag=1;
    		break;
    	}
    }
    if (flag==1)
    {
    	cout<<"Not A Prime Number"<<endl;
    }
    else
    {
    	cout<<"Prime Number"<<endl;
    }
	return 0;
}