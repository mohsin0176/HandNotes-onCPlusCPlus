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
	void getRadius();
	float area();
	void showRadius();
};
void Circle::Circle()
{
	radius=10;
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
    Circle c1;
    c1.showRadius();
    float a=c1.area();
    cout<<"Area of Circle:"<<a<<endl;
	return 0;
}