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
	Counter(int c)
	{
		count=c;
	}
	int getCount()
	{
		return count;
	}
	void operator ++()
	{
		count=++count;
	}
};


int main()
{
    Counter c1(10),c2(20);
    cout<<c1.getCount();
    cout<<c2.getCount();
    ++c2;
    ++c1;
    c2++;
    cout<<c1.getCount();
    cout<<c2.getCount();

	return 0;
}