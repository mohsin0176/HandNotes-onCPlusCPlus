#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

class Counter
{
unsigned int count;
public:
	Counter()
	{
		count=0;
	}
	void inc_count()
	{
		count++;
	}
	int getCount()
	{
		return count;
	}
};
int main()
{
    
    Counter c1,c2;
    cout<<c1.getCount();
    cout<<c2.getCount();

	c1.inc_count();
	c2.inc_count();
	c3.inc_count();

	cout<<c1.getCount();
    cout<<c2.getCount();
	return 0;
}