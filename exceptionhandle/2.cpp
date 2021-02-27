#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

void divide(int x,int y,int z)
{
	cout<<"Inside Divide"<<endl;
	if((x-y)!=0)
	{
		int res=z/(x-y);
		cout<<"Result"<<res;
	}
	else
	{
		throw(x-y);
	}
}
int main()
{
    try
    {
    	cout<<"Inside Main"<<endl;
    	divide(10,20,30);
    	divide(10,10,20);

    }
    catch(int i)
    {
    	cerr<<"Exception Caught"<<i;
    }
    cout<<"END"<<endl;
	return 0;
}