#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

double division(int a,int b)
{
	if(b==0)
	{
		throw"Division By Zero Condition ";
	}
	return (a/b);
}
int main()
{
    int x=50;
    int y=0;
    double z=0;
    try
    {
    	z=division(x,y);
    	cout<<z;
    }
    catch(const char* msg)
    {
    	cerr<<msg<<endl;
    }
	return 0;
}