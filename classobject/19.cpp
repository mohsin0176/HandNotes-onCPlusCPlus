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
int y;
public:
	void get()
	{
		cout<<"Enter x and y"<<endl;
		cin>>x>>y;
	} 
	void showX()
	{
		cout<<x;
	}
	void showY()
	{
		showX();
		cout<<y;
	}
};
int main()
{
    A a1;
    a1.get();
    a1.showY();
	return 0;
}