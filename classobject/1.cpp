#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
#define PI 3.1416
using namespace std;

class Circle
{
private:
	float radius;
public:
	void getRadius()
	{
		cout<<"Enter Radius:"<<endl;
		cin>>radius;
	}
	void area()
	{
		float ar;
		ar=PI*radius*radius;
		cout<<"Area of Circle:"<<ar;
	} 
	void showRadius()
	{
		cout<<"Radius:"<<radius<<endl;
	}
};


int main()
{
    Circle c1;
    c1.getRadius();
    c1.showRadius();
    c1.area();
    return 0;
}

