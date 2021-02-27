#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

void divide(double x,double y)
{
    cout<<"Inside divide"<<endl;
    try
    {
        if (y==0)
        {
            throw y;
        }
        else
        {
            cout<<"Division"<<(x/y)<<endl;
        }
    }
    catch(double)
    {
        cerr<<"Caught Double Inside Divide"<<endl;
        throw;
    }
    cout<<"End of Function"<<endl;
}
int main()
{
    try
    {
    	cout<<"Inside main"<<endl;
		divide(10.5,20.5);
		divide(10,0);
    }
    catch(double d)
    {
    	cerr<<"Excception Double inside Main<<endl;
    } 
    cout<<"END"<<endl;
	return 0;
}