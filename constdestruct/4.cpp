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
	Circle();
	Circle(float);
	Circle(Circle &);
	void getRadius();
	float area();
	void showRadius();
};
void Circle::Circle()
{
	radius=10;
}
void Circle::Circle(float r)
{
	radius=r;
}

Circle::Circle(Circle &c)
{
	radius=c.radius;
}
void Circle::getRadius()
{
	cout<<"Enter Radius:"<<endl;
	cin>>radius;
}
float Circle::area()
{
	return PI*radius*radius;
}
void Circle::showRadius()
{
	cout<<radius;
}
int main()
{
    Circle c1(10);
    Circle c2(c1);
    c2.showRadius();
    float a=c2.area();
    cout<<"Area of Circle:"<<a<<endl;
	return 0;
}