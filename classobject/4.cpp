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
	void init(float r);
	void getRadius();
	float area();
	void showRadius();
};
void Circle::init(float r)
{
	radius=r;
}
void Circle::getRadius()
{
	cout<<"Enter Radius:"<<endl;
	cin>>radius;
}
floar Circle::area()
{
	return PI*radius*radius;
}

void Circle::showRadius()
{
	cout<<"Radius:"<<radius<<endl;
}
int main()
{
    Circle c1,c2;
    c1.init(10);
    c1.getRadius();
    c1.showRadius();
    float a=c1.area();
    cout<<"Area of Circle:"<<a<<endl;
	return 0;
}