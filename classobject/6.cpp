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
	void setRadius(float r);
	float getRadius();
	inline float area();
};
void Circle::setRadius(float r)
{
	radius=r;
}
float Circle::getRadius()
{
	return radius;
}
inline float Circle::area()
{
	return PI*radius*radius;
}
int main()
{
   Circle c1;
   c1.setRadius(10);
   float a=c1.area();
   cout<<"Radius"<<c1.getRadius();
   cout<<"Area of Circle"<<a<<endl;
	return 0;
}