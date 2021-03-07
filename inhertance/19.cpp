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

class A
{
private:
	int x;
public:
	A(){x=0;}
	A(int a){x=a;}
	void show(){cout<<x;}
};
class B :public A
{
private:
	int y;
public:
	B():A()
	{
		y=0;
	}
	B(int a,int b):A(a)
	{
		y=b;
	}
	void show()
	{
		cout<<y;
	}
}
int main()
{
    B b1(10,20);
    b1.show();
	return 0;
}
