#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

void test(int x) throw(char,int,double)
{
	try
	{
		if (x==0)
		{
			throw 'B';
		}
		else if(x==1)
		{
			throw x;
		}
		else if(x==2)
		{
			throw 1;
		}
		cout<<"End of try Block"<<endl;
	}
    
    
} 

int main()
{

	try
	{
	cout<<"Testing multiple throw"<<endl;
	cout<<"x==0"<<endl;
	test(0);
	cout<<"x==1"<<endl;
	test(1);
	cout<<"x==2"<<endl;
	test(2);
	cout<<"x==3"<<endl;
	test(3);
	}
	catch(char c)
    {
    	cerr<<"Caught a character"<<endl;
    }
	catch(int i)
	{
		cerr<<"caught a int"<<c<<endl;
	}
	catch(double d)
	{
		cerr<<"Caught a double"<<d<<endl;
	}
    cout<<"End of try Catch system"<<endl;


	return 0;
}