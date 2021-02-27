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
int x;
public:
	A(int a=10)
	{
		x=a;
	}
	void showX()
	{
		cout<<x;
	}
};
int main()
{
   A a1;
   A a2(100);
   a1.showX();
   a2.showX();
	return 0;
}