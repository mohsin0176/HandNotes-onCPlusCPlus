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
protected:
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
	Counter operator++()
	{
		return Counter(++count);
	}
};
class CountDn:public Counter
{
public:
	CountDn(){}
	CountDn(int c){}
	Counter operator--()
	{
		return Counter(--count);
	}
};

int main()
{
    CountDn c1;
    cout<<c1.getCount();
    ++c1,++c1,++c1;
    cout<<c1.getCount();
    --c1;--c1;
    cout<<c1.getCount();
	return 0;
}
