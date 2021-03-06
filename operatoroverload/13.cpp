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
	A(){}
	A(int a){x=a;}
	void showX(){cout<<x;}
	A operator =A(A &a)
	{
		x=a.x;
		return A(x);
	}
};

int main()
{
    A a1(10);
    A a2;
    a1.showX();
    a2=a1;
    a2.showX();
    A a3=a1;
    a3.showX();
    A a4(a1);
    a4.showX();
	return 0;
}