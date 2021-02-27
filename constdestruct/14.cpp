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
static int y;
public:
	A()
	{
		y++;
		x=y;
		cout<<"x";
	}
	~A()
	{
		cout<<x;
	}
};
int A::y=0;
int main()
{
    
    A a1,a2;
    {
    	A a3;
    }
    A a4,a5;
    {
    	A a6,a7;
    }
    A a8;
	return 0;
}