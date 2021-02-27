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
float radius;
public:
	void setRadius();
	float getRadius();
	void showRadius();
};

void Circle::setRadius()
{
	cout<<"Enter Radius:"<<endl;
	cin>>radius;
}
float Circle::getRadius()
{
	return radius;
}
Circle createCircle()
{
	Circle c;
	c.setRadius();
	return c;
}

float calArea(Circle c)
{
	float ar;
	ar=PI*c.getRadius()*c.getRadius();
	return ar;
}

void Circle::showRadius()
{
	cout<<"Radius:"<<radius<<endl;
}

int main()
{   

	Circle c1=createCircle();
	c1.showRadius();
	float a=calArea(c1);
	cout<<"Area of Circle:"<<a;

	return 0;
}