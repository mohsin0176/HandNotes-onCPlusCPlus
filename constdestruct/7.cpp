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
    A().showX();
    A(100).showX();
	return 0;
}