#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;


class Outer
{ 
	int a;
	class Inner
	{
		int c;
	public:
		int d;
		Inner()
		{
			c=30;
			d=40;
		} 
		void showInner()
		{
			cout<<"Inner::showInner()"<<endl;
			cout<<c<<d;
		}
	};

	Inner ob1;
public:
	int b;
	Inner ob2;
	Outer()
	{
		a=10;
		b=20;
	} 
	void showOuter()
	{
		cout<<"Outer::showOuter"<<endl;
		cout<<a<<b;
		ob1.showInner();
	}

};

int main()
{
    Outer ob;
    cout<<ob.b;
    ob.showOuter();
    ob.ob2.showInner();
	return 0;
}