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

class Counter
{
	unsigned int count;
public:
	Counter()
	{
		counter=0;
	}
	int getCount()
	{
		return count;
	}
	Counter operator ++()
	{
		count=++count;
		cout<<"Prefix increment"<<endl;
	}
	void operator ++(int)
	{
		count=++count;
		Counter c;
		c.count=count;
		return c;
	}
};


int main()
{
    Counter c1,c2;
    cout<<c1.getCount();
    cout<<c2.getCount();

    ++c1;
    c2=++c1;
    cout<<c1.getCount();
    cout<<c2.getCount();

	return 0;
}