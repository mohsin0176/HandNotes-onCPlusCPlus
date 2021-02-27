#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;


int main()
{
    int a,b;
    cout<<"Enter Value of a and b"<<endl;
    cin>>a>>b;
    int c=a-b;
    try
    {
    	if (c!=0)
    	{
    		cout<<"Result"<<(a/c);
    	}
    	else
    	{
    		throw(c);
    	}
    }
    catch(int i)
    {
      cerr<<"Exception Caught"<<i;
    }
    cout<<"END"<<endl;
	return 0;
}