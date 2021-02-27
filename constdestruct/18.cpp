#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;
class A
{
private:
	int x;
public:
	A()
	{
		x=10;
	}
	friend class B;
};
class B
{
public:
	void show1(A a)
	{
		cout<<a.x;
	}
	void show2(A a)
	{
		cout<<a.x;
	}
	void show3(A a)
	{
		cout<<a.x;
	}
};

int main()
{
    A a1;
    B b1;
	b1.show1(a1);
	b1.show2(a1);
	b1.show3(a1);
	return 0;
}