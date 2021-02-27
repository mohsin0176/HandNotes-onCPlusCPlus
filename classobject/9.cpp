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
	void showRadius();
	float getRadius();
};

void Circle::setRadius()
{
	cout<<"Enter Radius"<<endl;
	cin>>radius;
}
void Circle::showRadius()
{
	cout<<"Radius:"<<radius;
}
float Circle::getRadius()
{
	return radius;
}
float calArea(Circle c)
{
	float ar;
	ar=PI*c.getRadius()*c.getRadius();
	return ar;
}
int main()
{
    
    Circle c1;
    c1.setRadius();
    c1.showRadius();
    float a=calArea(c1);
    cout<<"Area of Circle:"<<a<<endl;
	return 0;
}