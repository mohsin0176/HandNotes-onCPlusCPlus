#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<cstdlib.h>
#include<limits.h>
#include<iomanip.h>
using namespace std;
class Circle
{
float radius;
public:
	void getRadius();
	float area();
	void showRadius();
};
void Circle::getRadius()
{
	cout<<"Enter Radius:"<<radius<<endl;
}
float Circle::area()
{
	float ar;
	ar=PI*radius*radius;
	return ar;
}
void Circle::showRadius()
{
	cout<<"Radius:"<<radius<<endl;
}
int main()
{
    Circle c1;
    c1.getRadius();
    float a=c1.area();
    cout<<"Area of Circle:"<<a<<endl;
	return 0;
}