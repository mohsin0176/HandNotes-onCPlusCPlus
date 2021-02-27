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
public:
	int b;
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
	Outer()
	{
		a=10;
		b=20;
	} 
	void showOuter()
	{
		cout<<"Outer::showOuter()"<<endl;
		cout<<a<<b<<ob1.d;
	}
};

int main()
{
  
    Outer ob;
    Outer::Inner ob2;
    cout<<ob.b<<ob2.d;
    ob.showOuter();
    ob2.showInner();
	return 0;
}