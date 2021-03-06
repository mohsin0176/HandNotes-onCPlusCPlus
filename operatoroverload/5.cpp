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
		count=0;
	}
	Counter(int cnt)
	{
		count=cnt;
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
	Counter operator ++(int)
	{
		count++;
		return Counter(count);
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